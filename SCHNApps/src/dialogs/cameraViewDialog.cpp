#include "dialogs/cameraViewDialog.h"

#include "window.h"
#include "view.h"
#include "camera.h"

#include <QMessageBox>
#include <QMouseEvent>

namespace CGoGN
{

namespace SCHNApps
{

CameraViewDialog::CameraViewDialog(Window* window, View* view) :
	QDialog(view),
	m_window(window),
	m_view(view)
{
	this->setupUi(this);
	this->setWindowTitle(m_view->getName() + QString(" : camera"));

	connect(cameraList, SIGNAL(itemSelectionChanged()), this, SLOT(selectedCameraChanged()));

	connect(m_window, SIGNAL(cameraAdded(Camera*)), this, SLOT(addCameraToList(Camera*)));
	connect(m_window, SIGNAL(cameraRemoved(Camera*)), this, SLOT(removeCameraFromList(Camera*)));

	QList<Camera*> cameras = m_window->getCamerasList();
	foreach(Camera* c, cameras)
		cameraList->addItem(c->getName());

	selectCurrentCamera();
}

CameraViewDialog::~CameraViewDialog()
{}

void CameraViewDialog::selectCurrentCamera()
{
	Camera* current = m_view->getCurrentCamera();
	for(int i = 0; i < cameraList->count(); ++i)
	{
		if(cameraList->item(i)->text() == current->getName())
			cameraList->item(i)->setSelected(true);
		else
			cameraList->item(i)->setSelected(false);
	}
}

void CameraViewDialog::selectedCameraChanged()
{
	QList<QListWidgetItem*> currentItems = cameraList->selectedItems();
	if(currentItems.empty())
		selectCurrentCamera();
	else
	{
		const QString& cname = currentItems[0]->text();
		Camera* c = m_window->getCamera(cname);
		m_window->linkViewAndCamera(m_view, c);
	}
}

void CameraViewDialog::addCameraToList(Camera* c)
{
	cameraList->addItem(c->getName());
}

void CameraViewDialog::removeCameraFromList(Camera* c)
{
	for(int i = 0; i < cameraList->count(); ++i)
	{
		if(cameraList->item(i)->text() == c->getName())
		{
			delete cameraList->item(i);
			return;
		}
	}
}

} // namespace SCHNApps

} // namespace CGoGN