#include "dialogs/pluginDialog.h"

#include <libxml2/libxml/tree.h>
#include <QFile>
#include <QRegExp>
#include <QTreeWidgetItem>
#include <QFileDialog>
#include <QDomText>
#include <QMessageBox>
#include <QTextBrowser>

#include "interface/system.h"
#include "plugins/plugin.h"


PluginDialog::PluginDialog(Window *parent, PluginHash *activePlugins) :
	QDialog(parent),
//	xmlFile(System::app_path.toStdString().c_str() +
//			QString("/state_save.xml")),
	activePlugins(activePlugins),
	parentWindow(parent),
	init(true)
{
//	if(!xmlFile.exists())
//	{
//		System::Error::code= System::Error::NO_PLUGIN_PATH_FILE;
//		System::Error::showError(this);
//		return;
//	}
//
//	if(!xmlFile.open(QIODevice::ReadOnly)){
//		System::Error::code= System::Error::ERROR_OPEN_PLUGIN_FILE;
//		System::Error::showError(this);
//		return;
//	}
//	if(!doc.setContent(&xmlFile)){
//		System::Error::code= System::Error::BAD_PLUGIN_PATH_FILE;
//		xmlFile.close();
//		System::Error::showError(this);
//		return;
//	}
//	xmlFile.close();

	this->setupUi(this);

	treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
	treeWidget->setSelectionMode(QAbstractItemView::SingleSelection);

	connect(addButton, SIGNAL(pressed()), this, SLOT(cb_addPlugins()));
	connect(removeButton, SIGNAL(pressed()), this, SLOT(cb_removePlugins()));
	connect(directoryButton, SIGNAL(pressed()), this, SLOT(cb_addPluginDirectory()));

	connect(treeWidget, SIGNAL(itemChanged(QTreeWidgetItem *, int)),
	        this, SLOT(cb_activePlugin(QTreeWidgetItem *, int)));
	connect(treeWidget, SIGNAL(customContextMenuRequested(const QPoint &)),
	        this, SLOT(customContextMenu(const QPoint &)));

	connect(this, SIGNAL(accepted()), this, SLOT(cb_acceptDialog()));

	loadInfoPlugins();

	if (System::Error::code != System::Error::SUCCESS)
	{
		System::Error::showError(this);
	}

	init = false;
}

PluginDialog::~PluginDialog()
{}

bool PluginDialog::loadInfoPlugins()
{
	QFile xmlFile(System::app_path.toStdString().c_str() + QString("/state_save.xml"));

	if (!xmlFile.exists())
	{
		System::Error::code = System::Error::NO_PLUGIN_PATH_FILE;
		return false;
	}

	if (!xmlFile.open(QIODevice::ReadOnly))
	{
		System::Error::code = System::Error::ERROR_OPEN_PLUGIN_FILE;
		return false;
	}

	QDomDocument doc;

	if (!doc.setContent(&xmlFile))
	{
		System::Error::code = System::Error::BAD_PLUGIN_PATH_FILE;
		xmlFile.close();
		return false;
	}

	xmlFile.close();

	QDomElement root = doc.documentElement();
	QDomElement plugins_node = root.firstChildElement("PLUGINS");

	if (!plugins_node.isNull())
	{
		QDomElement plugins_subNode = plugins_node.firstChildElement();

		while (!plugins_subNode.isNull())
		{
			if (plugins_subNode.tagName() == "DIR")
			{
				QString pluginDirPath = plugins_subNode.attribute("path", "./plugins");
				QFileInfo fi(pluginDirPath);

				if (fi.exists() && fi.isDir())
				{
					QDir pluginDir(pluginDirPath);

					QTreeWidgetItem *dirItem = new QTreeWidgetItem(treeWidget, DIR);
					dirItem->setText(1, pluginDir.path());

					QStringList filters, dirFiles;
					filters << "lib*.so";
					filters << "lib*.dylib";

					dirFiles = pluginDir.entryList(filters, QDir::Files);
					foreach(QString fileName, dirFiles)
					{
						QFileInfo pfi(fileName);
						QString pluginName = pfi.baseName().remove(0, 3);

						QTreeWidgetItem *item = new QTreeWidgetItem(dirItem, FILE_DIR);
						item->setFlags(item->flags() | Qt::ItemIsUserCheckable);

						if (activePlugins->find(pluginName) != activePlugins->end())
						{
							item->setCheckState(0, Qt::Checked);
						}
						else
						{
							item->setCheckState(0, Qt::Unchecked);
						}

						item->setText(1, pluginDir.absoluteFilePath(fileName));
					}
				}
			}
			else if (plugins_subNode.tagName() == "FILE")
			{
				QString pluginPath = plugins_subNode.attribute("path");

				if (!pluginPath.isEmpty())
				{
					QFileInfo fi(pluginPath);

					if (fi.exists() && pluginPath.left(3) == "lib" && (fi.suffix() == "so" || fi.suffix() == "dylib"))
					{
						QString pluginName = fi.baseName().remove(0, 3);
						QTreeWidgetItem *item =  new QTreeWidgetItem(treeWidget, FILE);
						item->setFlags(item->flags() | Qt::ItemIsUserCheckable);

						if (activePlugins->find(pluginName) != activePlugins->end())
							item->setCheckState(0, Qt::Checked);
						else
							item->setCheckState(0, Qt::Unchecked);
						
						item->setText(1, pluginPath);
					}
				}
			}

			plugins_subNode = plugins_subNode.nextSiblingElement();
		}
	}

	return true;
}

void PluginDialog::showPluginsDir(QDir directory)
{
	if (!directory.exists())
		System::Error::code = System::Error::BAD_PLUGIN_PATH_IN_FILE_f(directory.absolutePath());

	QTreeWidgetItem *dirItem = new QTreeWidgetItem(treeWidget, DIR);
	dirItem->setText(1, directory.path());

	QStringList filters, dirFiles;
	filters << "lib*.so";
	filters << "lib*.dylib";

	dirFiles = directory.entryList(filters, QDir::Files);

	foreach(QString file, dirFiles)
	{
		QFileInfo pfi(file);
		QString pluginName = pfi.baseName().remove(0, 3);

		QTreeWidgetItem *item = new QTreeWidgetItem(dirItem, FILE_DIR);
		item->setFlags(item->flags() | Qt::ItemIsUserCheckable);

		if (activePlugins->find(pluginName) != activePlugins->end())
			item->setCheckState(0, Qt::Checked);
		else
			item->setCheckState(0, Qt::Unchecked);

		item->setText(1, directory.absoluteFilePath(file));
	}

	if (dirFiles.isEmpty())
		System::Error::code = System::Error::NO_PLUGIN_IN_DIR_f(directory.absolutePath());
}

void PluginDialog::cb_addPlugins()
{
	init = true;
	QStringList files = QFileDialog::getOpenFileNames(
		this,
		"Select one or more plugin to open",
		"/home",
		"Plugins (lib*.so lib*.dylib)"
	);

	if (!files.empty())
	{
		foreach(QString pluginFile, files)
		{
			QTreeWidgetItem *item = new QTreeWidgetItem(treeWidget, FILE);
			item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
			item->setCheckState(0, Qt::Unchecked);
			item->setText(1, pluginFile);
		}
	}

	if (System::Error::code != System::Error::SUCCESS)
		System::Error::showError(this);

	init = false;
}

void PluginDialog::cb_addPluginDirectory()
{
	init = true;
	QString dir = QFileDialog::getExistingDirectory(
		this,
		tr("Plugin Directory"),
		"/home",
		QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
	);

	if (!dir.isEmpty())
		showPluginsDir(QDir(dir));

	if (System::Error::code != System::Error::SUCCESS)
		System::Error::showError(this);

	init = false;
}

void PluginDialog::cb_removePlugins()
{
	QList<QTreeWidgetItem *> itemList = treeWidget->selectedItems();

	if (!itemList.isEmpty())
	{
		foreach(QTreeWidgetItem * item, itemList)
		{
			if (item->type() == FILE)
			{
				if (item->checkState(0) == Qt::Checked)
				{
					QMessageBox msgBox;
					msgBox.setText("Le plugin\n"
					               "\t" + item->text(1) +
					               " doit être désactivé avant de pouvoir être\n"
					               "supprimé.");
					msgBox.exec();
				}
				else
				{
					item = treeWidget->takeTopLevelItem(treeWidget->indexOfTopLevelItem(item));
					delete item;
				}
			}
			else if (item->type() == FILE_DIR)
			{
				QMessageBox msgBox;
				msgBox.setText("Le plugin\n"
				               "\t" + item->text(1) +
				               " fait partit d'un paquet/directory.\n"
				               "Il ne peut être supprimé séparément.");
				msgBox.exec();
			}
			else if (item->type() == DIR)
			{
				bool isAnyPluginActive = false;
				QTreeWidgetItem *fileItem;

				for (int i = 0; (i < item->childCount() && !isAnyPluginActive); ++i)
				{
					fileItem = item->child(i);

					if (fileItem->checkState(0) == Qt::Checked)
						isAnyPluginActive = true;
				}

				if (isAnyPluginActive)
				{
					QMessageBox msgBox;
					msgBox.setText("Un ou plusieurs plugins du dossier sont actifs\n"
					               "Veuillez désactiver tous les plugins du paquet avant de supprimer celui-ci.");
					msgBox.exec();
				}
				else
				{
					item = treeWidget->takeTopLevelItem(treeWidget->indexOfTopLevelItem(item));
					delete item;
				}
			}
		}
	}

	if (System::Error::code != System::Error::SUCCESS)
		System::Error::showError(this);
}

void PluginDialog::cb_activePlugin(QTreeWidgetItem *item, int column)
{
	if (!init && column == 0)
	{
		if (item->checkState(0) == Qt::Checked)
		{
			QString pluginFile = item->text(1);
			QFileInfo pluginInfo(pluginFile);
			QString pluginName = pluginInfo.baseName().remove(0, 3);

			if (activePlugins->find(pluginName) != activePlugins->end())
			{
				System::Error::code = System::Error::PLUGIN_EXISTS_f(pluginName);
				System::Error::showError(this);
				init = true; item->setCheckState(0, Qt::Unchecked), init = false;
				return;
			}

			if (!parentWindow->loadPlugin(item->text(1)))
			{
				init = true; item->setCheckState(0, Qt::Unchecked), init = false;
				return;
			}
		}
		else if (item->checkState(0) == Qt::Unchecked)
		{
			QString pluginFile = item->text(1);
			QFileInfo pluginInfo(pluginFile);
			QString pluginName = pluginInfo.baseName().remove(0, 3);

			PluginHash::iterator it = activePlugins->find(pluginName);
			bool pluginHasDependencies = (it != activePlugins->end()) ? (*it)->hasDependantPlugins() : false;
			QStringList depList;

			if (pluginHasDependencies)
				depList = (*it)->getDependantPluginNames();

			parentWindow->unloadPlugin(pluginName);

			if (pluginHasDependencies)
			{
				QTreeWidgetItemIterator tree_it(treeWidget, QTreeWidgetItemIterator::Checked);

				while (*tree_it)
				{
					QString depPlugPath = (*tree_it)->text(1);

					QFileInfo depPlugInfo(depPlugPath);
					QString depPlugName = depPlugInfo.baseName().remove(0, 3);

					if (depList.contains(depPlugName))
					{
						init = true;
						(*tree_it)->setCheckState(0, Qt::Unchecked);
						init = false;
					}

					++tree_it;
				}
			}
		}
	}
}

void PluginDialog::cb_acceptDialog()
{
	QStringList paths;

	int t = treeWidget->topLevelItemCount();

	for (int i = 0; i < t; ++i)
	{
		QTreeWidgetItem *item = treeWidget->topLevelItem(i);

		if (item->type() == FILE || item->type() == DIR)
		{
			QString path = item->text(1);
			paths.push_back(path);
		}
	}

	if (!System::StateHandler::savePluginsInfo(parentWindow, activePlugins, paths))
		System::Error::showError();
}

void PluginDialog::customContextMenu(const QPoint &pos)
{
	std::cout << "context menu?" << std::endl;

	QPoint globalPos = treeWidget->mapToGlobal(pos);

	QTreeWidgetItem *item = treeWidget->itemAt(pos);

	if (item && (item->type() == FILE || item->type() == FILE_DIR))
	{
		std::cout << "hello?" << std::endl;
		item->setSelected(true);

		QMenu myMenu("Plus...", this);
		QAction pluginInfo("Informations sur le plugin", this);
		myMenu.addAction(&pluginInfo);
		connect(&pluginInfo, SIGNAL(triggered()), this, SLOT(showPluginInfo()));

		myMenu.exec(globalPos);
	}
}

void PluginDialog::showPluginInfo()
{
	QTreeWidgetItem *item = treeWidget->currentItem();
	QString strUrl = item->text(1);

	System::Info::showPluginInfo(strUrl);
}