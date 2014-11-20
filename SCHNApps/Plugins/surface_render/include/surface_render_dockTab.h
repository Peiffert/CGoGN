#ifndef _SURFACE_RENDER_DOCK_TAB_H_
#define _SURFACE_RENDER_DOCK_TAB_H_

#include "ui_surface_render.h"
#include "Utils/vbo.h"
#include <QColorDialog>

namespace CGoGN
{

namespace SCHNApps
{

class SCHNApps;
class Surface_Render_Plugin;
struct MapParameters;

class Surface_Render_DockTab : public QWidget, public Ui::Surface_Render_TabWidget
{
	Q_OBJECT

	friend class Surface_Render_Plugin;

public:
	Surface_Render_DockTab(SCHNApps* s, Surface_Render_Plugin* p);

private:
	SCHNApps* m_schnapps;
	Surface_Render_Plugin* m_plugin;
	bool b_updatingUI;
	QColorDialog* m_colorDial;
	QColor m_diffuseColor;
	QColor m_simpleColor;
	QColor m_vertexColor;
	int m_currentColorDial;

private slots:
	void positionVBOChanged(int index);
	void normalVBOChanged(int index);
	void renderVerticesChanged(bool b);
	void verticesScaleFactorChanged(int i);
	void renderEdgesChanged(bool b);
	void renderFacesChanged(bool b);
	void faceStyleChanged(QAbstractButton* b);
	void renderBoundaryChanged(bool b);

	void diffuseColorClicked();
	void simpleColorClicked();
	void vertexColorClicked();
	void colorSelected(const QColor& col);



private:
	void addPositionVBO(QString name);
	void removePositionVBO(QString name);
	void addNormalVBO(QString name);
	void removeNormalVBO(QString name);

	void updateMapParameters();
};

} // namespace SCHNApps

} // namespace CGoGN

#endif
