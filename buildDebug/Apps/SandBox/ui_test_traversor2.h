/********************************************************************************
** Form generated from reading UI file 'test_traversor2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_TRAVERSOR2_H
#define UI_TEST_TRAVERSOR2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listTravers;
    QCheckBox *withBoundary;
    QSlider *widthSlider;
    QPushButton *svg;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(209, 418);
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
        listTravers = new QListWidget(dockWidgetContents);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        new QListWidgetItem(listTravers);
        listTravers->setObjectName(QString::fromUtf8("listTravers"));
        listTravers->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(listTravers);

        withBoundary = new QCheckBox(dockWidgetContents);
        withBoundary->setObjectName(QString::fromUtf8("withBoundary"));
        withBoundary->setChecked(true);

        verticalLayout->addWidget(withBoundary);

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


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listTravers->isSortingEnabled();
        listTravers->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listTravers->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("DockWidget", "Traversor2VVaE", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listTravers->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("DockWidget", "Traversor2VVaF", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listTravers->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("DockWidget", "Traversor2EEaV", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listTravers->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("DockWidget", "Traversor2EEaF", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listTravers->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("DockWidget", "Traversor2FFaV", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listTravers->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("DockWidget", "Traversor2FFaE", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listTravers->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("DockWidget", "Traversor2FV", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = listTravers->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("DockWidget", "Traverosr2FE", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem8 = listTravers->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("DockWidget", "Traversor2EV", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem9 = listTravers->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("DockWidget", "Traversor2EF", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem10 = listTravers->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("DockWidget", "Traversor2VE", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem11 = listTravers->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("DockWidget", "Traversor2VF", 0, QApplication::UnicodeUTF8));
        listTravers->setSortingEnabled(__sortingEnabled);

        withBoundary->setText(QApplication::translate("DockWidget", "with boundary", 0, QApplication::UnicodeUTF8));
        svg->setText(QApplication::translate("DockWidget", "SnapshotSVG", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_TRAVERSOR2_H
