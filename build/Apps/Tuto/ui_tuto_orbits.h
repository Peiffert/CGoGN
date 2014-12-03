/********************************************************************************
** Form generated from reading UI file 'tuto_orbits.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTO_ORBITS_H
#define UI_TUTO_ORBITS_H

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
    QFrame *line_2;
    QCheckBox *checkBox_text;
    QSlider *slider_text;
    QFrame *line_3;
    QLabel *label;
    QComboBox *Orbits;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(293, 507);
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
        line_2 = new QFrame(dockWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        checkBox_text = new QCheckBox(dockWidgetContents);
        checkBox_text->setObjectName(QString::fromUtf8("checkBox_text"));
        checkBox_text->setChecked(true);

        verticalLayout->addWidget(checkBox_text);

        slider_text = new QSlider(dockWidgetContents);
        slider_text->setObjectName(QString::fromUtf8("slider_text"));
        slider_text->setValue(50);
        slider_text->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_text);

        line_3 = new QFrame(dockWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Orbits = new QComboBox(dockWidgetContents);
        Orbits->setObjectName(QString::fromUtf8("Orbits"));
        Orbits->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Orbits);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);
        QObject::connect(checkBox_text, SIGNAL(toggled(bool)), slider_text, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));
        checkBox_text->setText(QApplication::translate("DockWidget", "Display attribute", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DockWidget", "Select orbit:", 0, QApplication::UnicodeUTF8));
        Orbits->clear();
        Orbits->insertItems(0, QStringList()
         << QApplication::translate("DockWidget", "Vertex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Edge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Volume", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Vertex_of_parent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Edge_of_parent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Face_of_parent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Vertex_of_parent2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockWidget", "Edge_of_parent_2", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTO_ORBITS_H
