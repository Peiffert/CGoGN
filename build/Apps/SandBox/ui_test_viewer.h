/********************************************************************************
** Form generated from reading UI file 'test_viewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_VIEWER_H
#define UI_TEST_VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QCheckBox *check_drawVertices;
    QSlider *slider_verticesSize;
    QCheckBox *check_drawEdges;
    QCheckBox *check_drawFaces;
    QComboBox *combo_faceLighting;
    QCheckBox *check_drawTopo;
    QCheckBox *check_drawNormals;
    QSlider *slider_normalsSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(174, 393);
        DockWidget->setMinimumSize(QSize(174, 393));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        check_drawVertices = new QCheckBox(tab);
        check_drawVertices->setObjectName(QString::fromUtf8("check_drawVertices"));

        verticalLayout->addWidget(check_drawVertices);

        slider_verticesSize = new QSlider(tab);
        slider_verticesSize->setObjectName(QString::fromUtf8("slider_verticesSize"));
        slider_verticesSize->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_verticesSize);

        check_drawEdges = new QCheckBox(tab);
        check_drawEdges->setObjectName(QString::fromUtf8("check_drawEdges"));

        verticalLayout->addWidget(check_drawEdges);

        check_drawFaces = new QCheckBox(tab);
        check_drawFaces->setObjectName(QString::fromUtf8("check_drawFaces"));

        verticalLayout->addWidget(check_drawFaces);

        combo_faceLighting = new QComboBox(tab);
        combo_faceLighting->setObjectName(QString::fromUtf8("combo_faceLighting"));

        verticalLayout->addWidget(combo_faceLighting);

        check_drawTopo = new QCheckBox(tab);
        check_drawTopo->setObjectName(QString::fromUtf8("check_drawTopo"));

        verticalLayout->addWidget(check_drawTopo);

        check_drawNormals = new QCheckBox(tab);
        check_drawNormals->setObjectName(QString::fromUtf8("check_drawNormals"));

        verticalLayout->addWidget(check_drawNormals);

        slider_normalsSize = new QSlider(tab);
        slider_normalsSize->setObjectName(QString::fromUtf8("slider_normalsSize"));
        slider_normalsSize->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_normalsSize);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());

        verticalLayout_3->addWidget(tabWidget);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);
        QObject::connect(check_drawFaces, SIGNAL(toggled(bool)), combo_faceLighting, SLOT(setVisible(bool)));
        QObject::connect(check_drawNormals, SIGNAL(toggled(bool)), slider_normalsSize, SLOT(setVisible(bool)));
        QObject::connect(check_drawVertices, SIGNAL(toggled(bool)), slider_verticesSize, SLOT(setVisible(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Commands", 0, QApplication::UnicodeUTF8));
        check_drawVertices->setText(QApplication::translate("DockWidget", "draw vertices", 0, QApplication::UnicodeUTF8));
        check_drawEdges->setText(QApplication::translate("DockWidget", "draw edges", 0, QApplication::UnicodeUTF8));
        check_drawFaces->setText(QApplication::translate("DockWidget", "draw faces", 0, QApplication::UnicodeUTF8));
        combo_faceLighting->clear();
        combo_faceLighting->insertItems(0, QStringList()
         << QApplication::translate("DockWidget", "FLAT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "PHONG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "DEPTH", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "SSAO", 0, QApplication::UnicodeUTF8)
        );
        check_drawTopo->setText(QApplication::translate("DockWidget", "draw topo", 0, QApplication::UnicodeUTF8));
        check_drawNormals->setText(QApplication::translate("DockWidget", "draw normals", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DockWidget", "Visu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_VIEWER_H
