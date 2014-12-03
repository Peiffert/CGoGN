/********************************************************************************
** Form generated from reading UI file 'tuto4.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTO4_H
#define UI_TUTO4_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *explodeSlider;
    QFrame *line;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QTextEdit *vertexEdit;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTextEdit *fragmentEdit;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QTextEdit *geometryEdit;
    QPushButton *compileButton;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(399, 485);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockWidget->sizePolicy().hasHeightForWidth());
        DockWidget->setSizePolicy(sizePolicy);
        DockWidget->setMinimumSize(QSize(324, 419));
        DockWidget->setFloating(true);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        dockWidgetContents->setMinimumSize(QSize(324, 394));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
#ifndef Q_OS_MAC
        verticalLayout->setContentsMargins(0, 0, 0, 0);
#endif
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        explodeSlider = new QSlider(dockWidgetContents);
        explodeSlider->setObjectName(QString::fromUtf8("explodeSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(explodeSlider->sizePolicy().hasHeightForWidth());
        explodeSlider->setSizePolicy(sizePolicy1);
        explodeSlider->setMinimum(20);
        explodeSlider->setMaximum(100);
        explodeSlider->setValue(100);
        explodeSlider->setSliderPosition(100);
        explodeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(explodeSlider);

        line = new QFrame(dockWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        vertexEdit = new QTextEdit(tab);
        vertexEdit->setObjectName(QString::fromUtf8("vertexEdit"));
        vertexEdit->setLineWrapMode(QTextEdit::NoWrap);
        vertexEdit->setTabStopWidth(20);
        vertexEdit->setAcceptRichText(false);

        gridLayout_4->addWidget(vertexEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fragmentEdit = new QTextEdit(tab_2);
        fragmentEdit->setObjectName(QString::fromUtf8("fragmentEdit"));
        fragmentEdit->setLineWrapMode(QTextEdit::NoWrap);
        fragmentEdit->setTabStopWidth(20);
        fragmentEdit->setAcceptRichText(false);

        gridLayout_2->addWidget(fragmentEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        geometryEdit = new QTextEdit(tab_3);
        geometryEdit->setObjectName(QString::fromUtf8("geometryEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(geometryEdit->sizePolicy().hasHeightForWidth());
        geometryEdit->setSizePolicy(sizePolicy2);
        geometryEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        geometryEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        geometryEdit->setLineWrapMode(QTextEdit::NoWrap);
        geometryEdit->setOverwriteMode(false);
        geometryEdit->setTabStopWidth(20);
        geometryEdit->setAcceptRichText(false);

        gridLayout_3->addWidget(geometryEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        compileButton = new QPushButton(dockWidgetContents);
        compileButton->setObjectName(QString::fromUtf8("compileButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(compileButton->sizePolicy().hasHeightForWidth());
        compileButton->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(compileButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface ShaderFlat", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DockWidget", "Explode", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DockWidget", "Shaders editor", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DockWidget", "Vertex", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DockWidget", "Fragment", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DockWidget", "Geometry", 0, QApplication::UnicodeUTF8));
        compileButton->setText(QApplication::translate("DockWidget", "recompile", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTO4_H
