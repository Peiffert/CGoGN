/********************************************************************************
** Form generated from reading UI file 'mcmesh.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MCMESH_H
#define UI_MCMESH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QCheckBox *check_drawEdges;
    QCheckBox *check_drawFaces;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(134, 513);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        check_drawEdges = new QCheckBox(dockWidgetContents);
        check_drawEdges->setObjectName(QString::fromUtf8("check_drawEdges"));

        gridLayout->addWidget(check_drawEdges, 0, 0, 1, 1);

        check_drawFaces = new QCheckBox(dockWidgetContents);
        check_drawFaces->setObjectName(QString::fromUtf8("check_drawFaces"));

        gridLayout->addWidget(check_drawFaces, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(2, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "DockWidget", 0, QApplication::UnicodeUTF8));
        check_drawEdges->setText(QApplication::translate("DockWidget", "draw edges", 0, QApplication::UnicodeUTF8));
        check_drawFaces->setText(QApplication::translate("DockWidget", "draw faces", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MCMESH_H
