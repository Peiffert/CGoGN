/********************************************************************************
** Form generated from reading UI file 'volumeExplorer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMEEXPLORER_H
#define UI_VOLUMEEXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_volumes;
    QCheckBox *checkBox_edges;
    QCheckBox *checkBox_topo;
    QSlider *slider_explode;
    QSlider *slider_explode_face;
    QFrame *line_3;
    QCheckBox *checkBox_plane;
    QCheckBox *checkBox_hide;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(150, 272);
        DockWidget->setMinimumSize(QSize(150, 250));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidgetContents->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        dockWidgetContents->setMinimumSize(QSize(150, 200));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_volumes = new QCheckBox(dockWidgetContents);
        checkBox_volumes->setObjectName(QString::fromUtf8("checkBox_volumes"));
        checkBox_volumes->setChecked(true);

        verticalLayout->addWidget(checkBox_volumes);

        checkBox_edges = new QCheckBox(dockWidgetContents);
        checkBox_edges->setObjectName(QString::fromUtf8("checkBox_edges"));
        checkBox_edges->setChecked(true);

        verticalLayout->addWidget(checkBox_edges);

        checkBox_topo = new QCheckBox(dockWidgetContents);
        checkBox_topo->setObjectName(QString::fromUtf8("checkBox_topo"));
        checkBox_topo->setChecked(true);

        verticalLayout->addWidget(checkBox_topo);

        slider_explode = new QSlider(dockWidgetContents);
        slider_explode->setObjectName(QString::fromUtf8("slider_explode"));
        slider_explode->setValue(50);
        slider_explode->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_explode);

        slider_explode_face = new QSlider(dockWidgetContents);
        slider_explode_face->setObjectName(QString::fromUtf8("slider_explode_face"));
        slider_explode_face->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_explode_face);

        line_3 = new QFrame(dockWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        checkBox_plane = new QCheckBox(dockWidgetContents);
        checkBox_plane->setObjectName(QString::fromUtf8("checkBox_plane"));
        checkBox_plane->setCheckable(true);
        checkBox_plane->setChecked(true);

        verticalLayout->addWidget(checkBox_plane);

        checkBox_hide = new QCheckBox(dockWidgetContents);
        checkBox_hide->setObjectName(QString::fromUtf8("checkBox_hide"));
        checkBox_hide->setEnabled(true);

        verticalLayout->addWidget(checkBox_hide);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);
        QObject::connect(checkBox_plane, SIGNAL(clicked(bool)), checkBox_hide, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));
        checkBox_volumes->setText(QApplication::translate("DockWidget", "Volumes", 0, QApplication::UnicodeUTF8));
        checkBox_edges->setText(QApplication::translate("DockWidget", "Edges of volumes", 0, QApplication::UnicodeUTF8));
        checkBox_topo->setText(QApplication::translate("DockWidget", "Topo", 0, QApplication::UnicodeUTF8));
        checkBox_plane->setText(QApplication::translate("DockWidget", "clipping", 0, QApplication::UnicodeUTF8));
        checkBox_hide->setText(QApplication::translate("DockWidget", "hide clipping plane", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMEEXPLORER_H
