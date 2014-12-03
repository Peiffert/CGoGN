/********************************************************************************
** Form generated from reading UI file 'tuto5.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTO5_H
#define UI_TUTO5_H

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
    QCheckBox *checkBox_balls;
    QSlider *slider_balls;
    QFrame *line_2;
    QCheckBox *checkBox_vectors;
    QSlider *slider_vectors;
    QFrame *line;
    QCheckBox *checkBox_text;
    QSlider *slider_text;
    QFrame *line_3;
    QCheckBox *checkBox_topo;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(150, 250);
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
        checkBox_balls = new QCheckBox(dockWidgetContents);
        checkBox_balls->setObjectName(QString::fromUtf8("checkBox_balls"));
        checkBox_balls->setChecked(true);

        verticalLayout->addWidget(checkBox_balls);

        slider_balls = new QSlider(dockWidgetContents);
        slider_balls->setObjectName(QString::fromUtf8("slider_balls"));
        slider_balls->setValue(50);
        slider_balls->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_balls);

        line_2 = new QFrame(dockWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        checkBox_vectors = new QCheckBox(dockWidgetContents);
        checkBox_vectors->setObjectName(QString::fromUtf8("checkBox_vectors"));
        checkBox_vectors->setChecked(true);

        verticalLayout->addWidget(checkBox_vectors);

        slider_vectors = new QSlider(dockWidgetContents);
        slider_vectors->setObjectName(QString::fromUtf8("slider_vectors"));
        slider_vectors->setValue(50);
        slider_vectors->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_vectors);

        line = new QFrame(dockWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

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

        checkBox_topo = new QCheckBox(dockWidgetContents);
        checkBox_topo->setObjectName(QString::fromUtf8("checkBox_topo"));
        checkBox_topo->setChecked(true);

        verticalLayout->addWidget(checkBox_topo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);
        QObject::connect(checkBox_balls, SIGNAL(toggled(bool)), slider_balls, SLOT(setVisible(bool)));
        QObject::connect(checkBox_text, SIGNAL(toggled(bool)), slider_text, SLOT(setVisible(bool)));
        QObject::connect(checkBox_vectors, SIGNAL(toggled(bool)), slider_vectors, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));
        checkBox_balls->setText(QApplication::translate("DockWidget", "Balls", 0, QApplication::UnicodeUTF8));
        checkBox_vectors->setText(QApplication::translate("DockWidget", "Vectors", 0, QApplication::UnicodeUTF8));
        checkBox_text->setText(QApplication::translate("DockWidget", "Text", 0, QApplication::UnicodeUTF8));
        checkBox_topo->setText(QApplication::translate("DockWidget", "Topo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTO5_H
