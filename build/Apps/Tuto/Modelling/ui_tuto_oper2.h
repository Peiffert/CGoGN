/********************************************************************************
** Form generated from reading UI file 'tuto_oper2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTO_OPER2_H
#define UI_TUTO_OPER2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
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
    QListWidget *listOper;
    QSlider *widthSlider;
    QPushButton *svg;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(227, 369);
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
        listOper = new QListWidget(dockWidgetContents);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        new QListWidgetItem(listOper);
        listOper->setObjectName(QString::fromUtf8("listOper"));
        listOper->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(listOper);

        widthSlider = new QSlider(dockWidgetContents);
        widthSlider->setObjectName(QString::fromUtf8("widthSlider"));
        widthSlider->setMinimum(1);
        widthSlider->setMaximum(10);
        widthSlider->setValue(5);
        widthSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(widthSlider);

        svg = new QPushButton(dockWidgetContents);
        svg->setObjectName(QString::fromUtf8("svg"));

        verticalLayout->addWidget(svg);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listOper->isSortingEnabled();
        listOper->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listOper->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("DockWidget", "splitVertex", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listOper->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("DockWidget", "deleteVertex", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listOper->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("DockWidget", "cutEdge", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listOper->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("DockWidget", "uncutEdge", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listOper->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("DockWidget", "collapseEdge", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listOper->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("DockWidget", "flipEdge", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listOper->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("DockWidget", "flipBackEdge", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = listOper->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("DockWidget", "splitFace", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem8 = listOper->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("DockWidget", "mergeFace", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem9 = listOper->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("DockWidget", "deleteFace", 0, QApplication::UnicodeUTF8));
        listOper->setSortingEnabled(__sortingEnabled);

        svg->setText(QApplication::translate("DockWidget", "SnapshotSVG", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTO_OPER2_H
