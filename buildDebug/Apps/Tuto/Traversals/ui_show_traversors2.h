/********************************************************************************
** Form generated from reading UI file 'show_traversors2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_TRAVERSORS2_H
#define UI_SHOW_TRAVERSORS2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QLabel *label_2;
    QComboBox *combo4;
    QComboBox *combo5;
    QComboBox *combo6;
    QFrame *line_2;
    QSlider *explodeSlider;
    QFrame *line_3;
    QCheckBox *checkTopo;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(150, 417);
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
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        combo4 = new QComboBox(dockWidgetContents);
        combo4->setObjectName(QString::fromUtf8("combo4"));
        combo4->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(combo4);

        combo5 = new QComboBox(dockWidgetContents);
        combo5->setObjectName(QString::fromUtf8("combo5"));
        combo5->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(combo5);

        combo6 = new QComboBox(dockWidgetContents);
        combo6->setObjectName(QString::fromUtf8("combo6"));
        combo6->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(combo6);

        line_2 = new QFrame(dockWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        explodeSlider = new QSlider(dockWidgetContents);
        explodeSlider->setObjectName(QString::fromUtf8("explodeSlider"));
        explodeSlider->setMinimum(1);
        explodeSlider->setMaximum(100);
        explodeSlider->setSliderPosition(80);
        explodeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(explodeSlider);

        line_3 = new QFrame(dockWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        checkTopo = new QCheckBox(dockWidgetContents);
        checkTopo->setObjectName(QString::fromUtf8("checkTopo"));
        checkTopo->setFocusPolicy(Qt::NoFocus);
        checkTopo->setChecked(true);

        verticalLayout->addWidget(checkTopo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        combo6->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DockWidget", "Traversor2", 0, QApplication::UnicodeUTF8));
        combo4->clear();
        combo4->insertItems(0, QStringList()
         << QApplication::translate("DockWidget", "Vertex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Edge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Face", 0, QApplication::UnicodeUTF8)
        );
        combo5->clear();
        combo5->insertItems(0, QStringList()
         << QApplication::translate("DockWidget", "incident to", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "adjacent by", 0, QApplication::UnicodeUTF8)
        );
        combo6->clear();
        combo6->insertItems(0, QStringList()
         << QApplication::translate("DockWidget", "Vertex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Edge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Face", 0, QApplication::UnicodeUTF8)
        );
        checkTopo->setText(QApplication::translate("DockWidget", "show topo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_TRAVERSORS2_H
