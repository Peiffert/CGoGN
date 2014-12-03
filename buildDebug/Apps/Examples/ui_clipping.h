/********************************************************************************
** Form generated from reading UI file 'clipping.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPING_H
#define UI_CLIPPING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget_Options;
    QWidget *tab_Object;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_vertices;
    QCheckBox *checkBox_lines;
    QCheckBox *checkBox_faces;
    QGroupBox *groupBox_topo;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *explod_phi2;
    QDoubleSpinBox *explod_phi3;
    QLabel *label_faces;
    QLabel *label_volumes;
    QDoubleSpinBox *explod_phi1;
    QLabel *label_edges;
    QSpacerItem *verticalSpacer;
    QWidget *tab_Clipping;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_ClippingMode;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *radioButton_ClippingModeAnd;
    QRadioButton *radioButton_ClippingModeOr;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_clipSpheres;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_addSphere;
    QGridLayout *gridLayout_13;
    QLabel *label_SphereResolution;
    QSpinBox *spinBox_SphereResolution;
    QLabel *label_GridColor_2;
    QPushButton *pushButton_changeSpheresColor;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_clipPlanes;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_addPlane;
    QGridLayout *gridLayout_12;
    QLabel *label_GridResolution;
    QSpinBox *spinBox_GridResolution;
    QLabel *label_GridColor;
    QPushButton *pushButton_changePlanesColor;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_ColorAttenuation;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_ColorAttenuationFactor;
    QDoubleSpinBox *doubleSpinBox_ColorAttenuationFactor;
    QLabel *label_ColorAttenuationMode;
    QRadioButton *radioButton_ColorAttenuationModeLinear;
    QRadioButton *radioButton_ColorAttenuationModeQuadratic;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_ClippingPresets;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_StaticClippingPresets;
    QVBoxLayout *verticalLayout_12;
    QComboBox *comboBox_StaticClippingPresets;
    QPushButton *PushButton_ApplyStaticClippingPreset;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_AnimatedClippingPresets;
    QVBoxLayout *verticalLayout_16;
    QComboBox *comboBox_AnimatedClippingPresets;
    QPushButton *PushButton_ApplyAnimatedClippingPreset;
    QPushButton *pushButton_StopAnimation;
    QGroupBox *groupBox_AnimatedClippingPresetSpeed;
    QVBoxLayout *verticalLayout_17;
    QDoubleSpinBox *doubleSpinBox_AnimatedClippingPresetSpeed;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_8;
    QLabel *label_2;
    QPushButton *compileButton;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_9;
    QTextEdit *vertexEdit;
    QWidget *tab_4;
    QGridLayout *gridLayout_10;
    QTextEdit *fragmentEdit;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QString::fromUtf8("DockWidget"));
        DockWidget->resize(374, 780);
        DockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::East);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tabWidget_Options = new QTabWidget(tab);
        tabWidget_Options->setObjectName(QString::fromUtf8("tabWidget_Options"));
        tab_Object = new QWidget();
        tab_Object->setObjectName(QString::fromUtf8("tab_Object"));
        verticalLayout_2 = new QVBoxLayout(tab_Object);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_vertices = new QCheckBox(tab_Object);
        checkBox_vertices->setObjectName(QString::fromUtf8("checkBox_vertices"));

        verticalLayout->addWidget(checkBox_vertices);

        checkBox_lines = new QCheckBox(tab_Object);
        checkBox_lines->setObjectName(QString::fromUtf8("checkBox_lines"));
        checkBox_lines->setChecked(true);

        verticalLayout->addWidget(checkBox_lines);

        checkBox_faces = new QCheckBox(tab_Object);
        checkBox_faces->setObjectName(QString::fromUtf8("checkBox_faces"));
        checkBox_faces->setChecked(true);

        verticalLayout->addWidget(checkBox_faces);

        groupBox_topo = new QGroupBox(tab_Object);
        groupBox_topo->setObjectName(QString::fromUtf8("groupBox_topo"));
        groupBox_topo->setEnabled(true);
        groupBox_topo->setCheckable(true);
        groupBox_topo->setChecked(false);
        gridLayout_3 = new QGridLayout(groupBox_topo);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        explod_phi2 = new QDoubleSpinBox(groupBox_topo);
        explod_phi2->setObjectName(QString::fromUtf8("explod_phi2"));
        explod_phi2->setMaximum(1);
        explod_phi2->setSingleStep(0.1);
        explod_phi2->setValue(0.9);

        gridLayout_2->addWidget(explod_phi2, 1, 1, 1, 1);

        explod_phi3 = new QDoubleSpinBox(groupBox_topo);
        explod_phi3->setObjectName(QString::fromUtf8("explod_phi3"));
        explod_phi3->setMaximum(1);
        explod_phi3->setSingleStep(0.1);
        explod_phi3->setValue(0.9);

        gridLayout_2->addWidget(explod_phi3, 2, 1, 1, 1);

        label_faces = new QLabel(groupBox_topo);
        label_faces->setObjectName(QString::fromUtf8("label_faces"));

        gridLayout_2->addWidget(label_faces, 1, 0, 1, 1);

        label_volumes = new QLabel(groupBox_topo);
        label_volumes->setObjectName(QString::fromUtf8("label_volumes"));

        gridLayout_2->addWidget(label_volumes, 2, 0, 1, 1);

        explod_phi1 = new QDoubleSpinBox(groupBox_topo);
        explod_phi1->setObjectName(QString::fromUtf8("explod_phi1"));
        explod_phi1->setMaximum(1);
        explod_phi1->setSingleStep(0.1);
        explod_phi1->setValue(0.9);

        gridLayout_2->addWidget(explod_phi1, 0, 1, 1, 1);

        label_edges = new QLabel(groupBox_topo);
        label_edges->setObjectName(QString::fromUtf8("label_edges"));

        gridLayout_2->addWidget(label_edges, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_topo);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget_Options->addTab(tab_Object, QString());
        tab_Clipping = new QWidget();
        tab_Clipping->setObjectName(QString::fromUtf8("tab_Clipping"));
        verticalLayout_6 = new QVBoxLayout(tab_Clipping);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBox_ClippingMode = new QGroupBox(tab_Clipping);
        groupBox_ClippingMode->setObjectName(QString::fromUtf8("groupBox_ClippingMode"));
        verticalLayout_9 = new QVBoxLayout(groupBox_ClippingMode);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        radioButton_ClippingModeAnd = new QRadioButton(groupBox_ClippingMode);
        radioButton_ClippingModeAnd->setObjectName(QString::fromUtf8("radioButton_ClippingModeAnd"));

        verticalLayout_9->addWidget(radioButton_ClippingModeAnd);

        radioButton_ClippingModeOr = new QRadioButton(groupBox_ClippingMode);
        radioButton_ClippingModeOr->setObjectName(QString::fromUtf8("radioButton_ClippingModeOr"));

        verticalLayout_9->addWidget(radioButton_ClippingModeOr);


        verticalLayout_8->addWidget(groupBox_ClippingMode);


        verticalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_clipSpheres = new QGroupBox(tab_Clipping);
        groupBox_clipSpheres->setObjectName(QString::fromUtf8("groupBox_clipSpheres"));
        groupBox_clipSpheres->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(groupBox_clipSpheres);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_addSphere = new QPushButton(groupBox_clipSpheres);
        pushButton_addSphere->setObjectName(QString::fromUtf8("pushButton_addSphere"));

        horizontalLayout_3->addWidget(pushButton_addSphere);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_SphereResolution = new QLabel(groupBox_clipSpheres);
        label_SphereResolution->setObjectName(QString::fromUtf8("label_SphereResolution"));

        gridLayout_13->addWidget(label_SphereResolution, 0, 0, 1, 1);

        spinBox_SphereResolution = new QSpinBox(groupBox_clipSpheres);
        spinBox_SphereResolution->setObjectName(QString::fromUtf8("spinBox_SphereResolution"));
        spinBox_SphereResolution->setMaximum(200);

        gridLayout_13->addWidget(spinBox_SphereResolution, 0, 1, 1, 1);

        label_GridColor_2 = new QLabel(groupBox_clipSpheres);
        label_GridColor_2->setObjectName(QString::fromUtf8("label_GridColor_2"));

        gridLayout_13->addWidget(label_GridColor_2, 1, 0, 1, 1);

        pushButton_changeSpheresColor = new QPushButton(groupBox_clipSpheres);
        pushButton_changeSpheresColor->setObjectName(QString::fromUtf8("pushButton_changeSpheresColor"));

        gridLayout_13->addWidget(pushButton_changeSpheresColor, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_13);


        verticalLayout_5->addWidget(groupBox_clipSpheres);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_clipPlanes = new QGroupBox(tab_Clipping);
        groupBox_clipPlanes->setObjectName(QString::fromUtf8("groupBox_clipPlanes"));
        groupBox_clipPlanes->setEnabled(true);
        horizontalLayout_2 = new QHBoxLayout(groupBox_clipPlanes);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_addPlane = new QPushButton(groupBox_clipPlanes);
        pushButton_addPlane->setObjectName(QString::fromUtf8("pushButton_addPlane"));

        horizontalLayout_2->addWidget(pushButton_addPlane);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_GridResolution = new QLabel(groupBox_clipPlanes);
        label_GridResolution->setObjectName(QString::fromUtf8("label_GridResolution"));

        gridLayout_12->addWidget(label_GridResolution, 0, 0, 1, 1);

        spinBox_GridResolution = new QSpinBox(groupBox_clipPlanes);
        spinBox_GridResolution->setObjectName(QString::fromUtf8("spinBox_GridResolution"));
        spinBox_GridResolution->setMaximum(200);

        gridLayout_12->addWidget(spinBox_GridResolution, 0, 1, 1, 1);

        label_GridColor = new QLabel(groupBox_clipPlanes);
        label_GridColor->setObjectName(QString::fromUtf8("label_GridColor"));

        gridLayout_12->addWidget(label_GridColor, 1, 0, 1, 1);

        pushButton_changePlanesColor = new QPushButton(groupBox_clipPlanes);
        pushButton_changePlanesColor->setObjectName(QString::fromUtf8("pushButton_changePlanesColor"));

        gridLayout_12->addWidget(pushButton_changePlanesColor, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_12);


        verticalLayout_3->addWidget(groupBox_clipPlanes);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        groupBox_ColorAttenuation = new QGroupBox(tab_Clipping);
        groupBox_ColorAttenuation->setObjectName(QString::fromUtf8("groupBox_ColorAttenuation"));
        verticalLayout_11 = new QVBoxLayout(groupBox_ColorAttenuation);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_ColorAttenuationFactor = new QLabel(groupBox_ColorAttenuation);
        label_ColorAttenuationFactor->setObjectName(QString::fromUtf8("label_ColorAttenuationFactor"));
        label_ColorAttenuationFactor->setWordWrap(true);

        verticalLayout_11->addWidget(label_ColorAttenuationFactor);

        doubleSpinBox_ColorAttenuationFactor = new QDoubleSpinBox(groupBox_ColorAttenuation);
        doubleSpinBox_ColorAttenuationFactor->setObjectName(QString::fromUtf8("doubleSpinBox_ColorAttenuationFactor"));
        doubleSpinBox_ColorAttenuationFactor->setDecimals(4);
        doubleSpinBox_ColorAttenuationFactor->setSingleStep(1);

        verticalLayout_11->addWidget(doubleSpinBox_ColorAttenuationFactor);

        label_ColorAttenuationMode = new QLabel(groupBox_ColorAttenuation);
        label_ColorAttenuationMode->setObjectName(QString::fromUtf8("label_ColorAttenuationMode"));
        label_ColorAttenuationMode->setWordWrap(true);

        verticalLayout_11->addWidget(label_ColorAttenuationMode);

        radioButton_ColorAttenuationModeLinear = new QRadioButton(groupBox_ColorAttenuation);
        radioButton_ColorAttenuationModeLinear->setObjectName(QString::fromUtf8("radioButton_ColorAttenuationModeLinear"));

        verticalLayout_11->addWidget(radioButton_ColorAttenuationModeLinear);

        radioButton_ColorAttenuationModeQuadratic = new QRadioButton(groupBox_ColorAttenuation);
        radioButton_ColorAttenuationModeQuadratic->setObjectName(QString::fromUtf8("radioButton_ColorAttenuationModeQuadratic"));

        verticalLayout_11->addWidget(radioButton_ColorAttenuationModeQuadratic);


        verticalLayout_10->addWidget(groupBox_ColorAttenuation);


        verticalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        tabWidget_Options->addTab(tab_Clipping, QString());
        tab_ClippingPresets = new QWidget();
        tab_ClippingPresets->setObjectName(QString::fromUtf8("tab_ClippingPresets"));
        verticalLayout_14 = new QVBoxLayout(tab_ClippingPresets);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_StaticClippingPresets = new QGroupBox(tab_ClippingPresets);
        groupBox_StaticClippingPresets->setObjectName(QString::fromUtf8("groupBox_StaticClippingPresets"));
        verticalLayout_12 = new QVBoxLayout(groupBox_StaticClippingPresets);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        comboBox_StaticClippingPresets = new QComboBox(groupBox_StaticClippingPresets);
        comboBox_StaticClippingPresets->setObjectName(QString::fromUtf8("comboBox_StaticClippingPresets"));

        verticalLayout_12->addWidget(comboBox_StaticClippingPresets);

        PushButton_ApplyStaticClippingPreset = new QPushButton(groupBox_StaticClippingPresets);
        PushButton_ApplyStaticClippingPreset->setObjectName(QString::fromUtf8("PushButton_ApplyStaticClippingPreset"));

        verticalLayout_12->addWidget(PushButton_ApplyStaticClippingPreset);


        verticalLayout_7->addWidget(groupBox_StaticClippingPresets);


        verticalLayout_13->addLayout(verticalLayout_7);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        groupBox_AnimatedClippingPresets = new QGroupBox(tab_ClippingPresets);
        groupBox_AnimatedClippingPresets->setObjectName(QString::fromUtf8("groupBox_AnimatedClippingPresets"));
        verticalLayout_16 = new QVBoxLayout(groupBox_AnimatedClippingPresets);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        comboBox_AnimatedClippingPresets = new QComboBox(groupBox_AnimatedClippingPresets);
        comboBox_AnimatedClippingPresets->setObjectName(QString::fromUtf8("comboBox_AnimatedClippingPresets"));

        verticalLayout_16->addWidget(comboBox_AnimatedClippingPresets);

        PushButton_ApplyAnimatedClippingPreset = new QPushButton(groupBox_AnimatedClippingPresets);
        PushButton_ApplyAnimatedClippingPreset->setObjectName(QString::fromUtf8("PushButton_ApplyAnimatedClippingPreset"));

        verticalLayout_16->addWidget(PushButton_ApplyAnimatedClippingPreset);

        pushButton_StopAnimation = new QPushButton(groupBox_AnimatedClippingPresets);
        pushButton_StopAnimation->setObjectName(QString::fromUtf8("pushButton_StopAnimation"));

        verticalLayout_16->addWidget(pushButton_StopAnimation);

        groupBox_AnimatedClippingPresetSpeed = new QGroupBox(groupBox_AnimatedClippingPresets);
        groupBox_AnimatedClippingPresetSpeed->setObjectName(QString::fromUtf8("groupBox_AnimatedClippingPresetSpeed"));
        verticalLayout_17 = new QVBoxLayout(groupBox_AnimatedClippingPresetSpeed);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        doubleSpinBox_AnimatedClippingPresetSpeed = new QDoubleSpinBox(groupBox_AnimatedClippingPresetSpeed);
        doubleSpinBox_AnimatedClippingPresetSpeed->setObjectName(QString::fromUtf8("doubleSpinBox_AnimatedClippingPresetSpeed"));
        doubleSpinBox_AnimatedClippingPresetSpeed->setMinimum(-100);
        doubleSpinBox_AnimatedClippingPresetSpeed->setMaximum(100);
        doubleSpinBox_AnimatedClippingPresetSpeed->setSingleStep(0.1);
        doubleSpinBox_AnimatedClippingPresetSpeed->setValue(1);

        verticalLayout_17->addWidget(doubleSpinBox_AnimatedClippingPresetSpeed);


        verticalLayout_16->addWidget(groupBox_AnimatedClippingPresetSpeed);


        verticalLayout_15->addWidget(groupBox_AnimatedClippingPresets);


        verticalLayout_13->addLayout(verticalLayout_15);


        verticalLayout_14->addLayout(verticalLayout_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_3);

        tabWidget_Options->addTab(tab_ClippingPresets, QString());

        gridLayout_6->addWidget(tabWidget_Options, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);

        compileButton = new QPushButton(tab_2);
        compileButton->setObjectName(QString::fromUtf8("compileButton"));

        gridLayout_8->addWidget(compileButton, 2, 0, 1, 1);

        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_9 = new QGridLayout(tab_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        vertexEdit = new QTextEdit(tab_3);
        vertexEdit->setObjectName(QString::fromUtf8("vertexEdit"));

        gridLayout_9->addWidget(vertexEdit, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_10 = new QGridLayout(tab_4);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        fragmentEdit = new QTextEdit(tab_4);
        fragmentEdit->setObjectName(QString::fromUtf8("fragmentEdit"));

        gridLayout_10->addWidget(fragmentEdit, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_4, QString());

        gridLayout_8->addWidget(tabWidget_2, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        tabWidget->setCurrentIndex(0);
        tabWidget_Options->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Interface", 0, QApplication::UnicodeUTF8));
        checkBox_vertices->setText(QApplication::translate("DockWidget", "Vertices", 0, QApplication::UnicodeUTF8));
        checkBox_lines->setText(QApplication::translate("DockWidget", "Lines", 0, QApplication::UnicodeUTF8));
        checkBox_faces->setText(QApplication::translate("DockWidget", "Faces", 0, QApplication::UnicodeUTF8));
        groupBox_topo->setTitle(QApplication::translate("DockWidget", "Topo", 0, QApplication::UnicodeUTF8));
        label_faces->setText(QApplication::translate("DockWidget", "Faces", 0, QApplication::UnicodeUTF8));
        label_volumes->setText(QApplication::translate("DockWidget", "Volumes", 0, QApplication::UnicodeUTF8));
        explod_phi1->setPrefix(QString());
        label_edges->setText(QApplication::translate("DockWidget", "Edges", 0, QApplication::UnicodeUTF8));
        tabWidget_Options->setTabText(tabWidget_Options->indexOf(tab_Object), QApplication::translate("DockWidget", "Object", 0, QApplication::UnicodeUTF8));
        groupBox_ClippingMode->setTitle(QApplication::translate("DockWidget", "Clipping Mode", 0, QApplication::UnicodeUTF8));
        radioButton_ClippingModeAnd->setText(QApplication::translate("DockWidget", "AND", 0, QApplication::UnicodeUTF8));
        radioButton_ClippingModeOr->setText(QApplication::translate("DockWidget", "OR", 0, QApplication::UnicodeUTF8));
        groupBox_clipSpheres->setTitle(QApplication::translate("DockWidget", "Clipping Spheres", 0, QApplication::UnicodeUTF8));
        pushButton_addSphere->setText(QApplication::translate("DockWidget", "Add", 0, QApplication::UnicodeUTF8));
        label_SphereResolution->setText(QApplication::translate("DockWidget", "Res.", 0, QApplication::UnicodeUTF8));
        label_GridColor_2->setText(QApplication::translate("DockWidget", "Color", 0, QApplication::UnicodeUTF8));
        pushButton_changeSpheresColor->setText(QApplication::translate("DockWidget", "Change Color", 0, QApplication::UnicodeUTF8));
        groupBox_clipPlanes->setTitle(QApplication::translate("DockWidget", "Clipping Planes", 0, QApplication::UnicodeUTF8));
        pushButton_addPlane->setText(QApplication::translate("DockWidget", "Add", 0, QApplication::UnicodeUTF8));
        label_GridResolution->setText(QApplication::translate("DockWidget", "Res.", 0, QApplication::UnicodeUTF8));
        label_GridColor->setText(QApplication::translate("DockWidget", "Color", 0, QApplication::UnicodeUTF8));
        pushButton_changePlanesColor->setText(QApplication::translate("DockWidget", "Change Color", 0, QApplication::UnicodeUTF8));
        groupBox_ColorAttenuation->setTitle(QApplication::translate("DockWidget", "Color Attenuation", 0, QApplication::UnicodeUTF8));
        label_ColorAttenuationFactor->setText(QApplication::translate("DockWidget", "Color Att. Factor :", 0, QApplication::UnicodeUTF8));
        label_ColorAttenuationMode->setText(QApplication::translate("DockWidget", "Color Att. Mode :", 0, QApplication::UnicodeUTF8));
        radioButton_ColorAttenuationModeLinear->setText(QApplication::translate("DockWidget", "Linear", 0, QApplication::UnicodeUTF8));
        radioButton_ColorAttenuationModeQuadratic->setText(QApplication::translate("DockWidget", "Quadratic", 0, QApplication::UnicodeUTF8));
        tabWidget_Options->setTabText(tabWidget_Options->indexOf(tab_Clipping), QApplication::translate("DockWidget", "Clipping", 0, QApplication::UnicodeUTF8));
        groupBox_StaticClippingPresets->setTitle(QApplication::translate("DockWidget", "Static Clipping Presets", 0, QApplication::UnicodeUTF8));
        PushButton_ApplyStaticClippingPreset->setText(QApplication::translate("DockWidget", "Apply Static Preset", 0, QApplication::UnicodeUTF8));
        groupBox_AnimatedClippingPresets->setTitle(QApplication::translate("DockWidget", "Animated Clipping Presets", 0, QApplication::UnicodeUTF8));
        PushButton_ApplyAnimatedClippingPreset->setText(QApplication::translate("DockWidget", "Apply Animated Preset", 0, QApplication::UnicodeUTF8));
        pushButton_StopAnimation->setText(QApplication::translate("DockWidget", "Stop Animation", 0, QApplication::UnicodeUTF8));
        groupBox_AnimatedClippingPresetSpeed->setTitle(QApplication::translate("DockWidget", "Speed Factor", 0, QApplication::UnicodeUTF8));
        tabWidget_Options->setTabText(tabWidget_Options->indexOf(tab_ClippingPresets), QApplication::translate("DockWidget", "Clipping Presets", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DockWidget", "Visualisation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DockWidget", "Shader Editor", 0, QApplication::UnicodeUTF8));
        compileButton->setText(QApplication::translate("DockWidget", "Recompile", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("DockWidget", "Vertex", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("DockWidget", "Fragment", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DockWidget", "Shader", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPING_H
