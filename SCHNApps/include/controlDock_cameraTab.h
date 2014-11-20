#ifndef _CONTROL_DOCK_CAMERA_TAB_H_
#define _CONTROL_DOCK_CAMERA_TAB_H_

#include "ui_controlDock_CameraTabWidget.h"

namespace CGoGN
{

namespace SCHNApps
{

class SCHNApps;
class Camera;
class View;

class ControlDock_CameraTab : public QWidget, public Ui::ControlDock_CameraTabWidget
{
	Q_OBJECT

public:
	ControlDock_CameraTab(SCHNApps* s);
	QString title() { return QString("Cameras"); }

private slots:
	// slots called from UI actions
	void addCameraButtonClicked();
	void cameraCheckStateChanged(QListWidgetItem* item);
	void cameraProjectionChanged(QAbstractButton* b);
	void cameraDrawClicked(bool b);
	void cameraDrawPathClicked(bool b);

	// slots called from SCHNApps signals
	void cameraAdded(Camera* c);
	void cameraRemoved(Camera* c);
	void selectedViewChanged(View* prev, View* cur);

	// slots called from selected View signals
	void selectedViewCurrentCameraChanged(Camera* prev, Camera* cur);

	// slots called from current Camera signals
	void currentCameraProjectionTypeChanged(int t);
	void currentCameraDrawChanged(bool b);
	void currentCameraDrawPathChanged(bool b);

private:
	void updateCurrentCameraInfo();

	SCHNApps* m_schnapps;
	bool b_updatingUI;
};

} // namespace SCHNApps

} // namespace CGoGN

#endif
