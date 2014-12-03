/********************************************************************************
** Form generated from reading UI file 'vbo_attribs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBO_ATTRIBS_H
#define UI_VBO_ATTRIBS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDial>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkLines;
    QPushButton *color_button;
    QDial *dial_line_width;
    QSlider *horizontalSlider;
    QFrame *line;
    QLabel *label;
    QLCDNumber *number_of_darts;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(122, 335);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockWidget->sizePolicy().hasHeightForWidth());
        DockWidget->setSizePolicy(sizePolicy);
        DockWidget->setCursor(QCursor(Qt::PointingHandCursor));
        DockWidget->setFloating(false);
        DockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        DockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        dockWidgetContents->setMinimumSize(QSize(122, 0));
        verticalLayoutWidget = new QWidget(dockWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 122, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkLines = new QCheckBox(verticalLayoutWidget);
        checkLines->setObjectName(QString::fromUtf8("checkLines"));
        checkLines->setChecked(true);

        verticalLayout->addWidget(checkLines);

        color_button = new QPushButton(verticalLayoutWidget);
        color_button->setObjectName(QString::fromUtf8("color_button"));

        verticalLayout->addWidget(color_button);

        dial_line_width = new QDial(verticalLayoutWidget);
        dial_line_width->setObjectName(QString::fromUtf8("dial_line_width"));
        dial_line_width->setCursor(QCursor(Qt::ClosedHandCursor));
        dial_line_width->setMaximum(10);
        dial_line_width->setPageStep(2);
        dial_line_width->setSliderPosition(4);

        verticalLayout->addWidget(dial_line_width);

        horizontalSlider = new QSlider(verticalLayoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(10);
        horizontalSlider->setPageStep(2);
        horizontalSlider->setValue(4);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        number_of_darts = new QLCDNumber(verticalLayoutWidget);
        number_of_darts->setObjectName(QString::fromUtf8("number_of_darts"));
        number_of_darts->setFrameShape(QFrame::Box);
        number_of_darts->setLineWidth(2);
        number_of_darts->setNumDigits(6);
        number_of_darts->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(number_of_darts);

        verticalSpacer = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);
        QObject::connect(dial_line_width, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), dial_line_width, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Control", 0, QApplication::UnicodeUTF8));
        checkLines->setText(QApplication::translate("DockWidget", "Edges drawing", 0, QApplication::UnicodeUTF8));
        color_button->setText(QApplication::translate("DockWidget", "Color", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DockWidget", "Nb darts :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBO_ATTRIBS_H
