#include "surface_selection.h"

#include "schnapps.h"
#include "view.h"
#include "mapHandler.h"

#include "Algo/Selection/raySelector.h"
#include "Algo/Selection/collector.h"

#include <QKeyEvent>
#include <QMouseEvent>

namespace CGoGN
{

namespace SCHNApps
{

Surface_Selection_Plugin::Surface_Selection_Plugin() :
	m_selecting(false),
	m_normalAngleThreshold(10)
{}

bool Surface_Selection_Plugin::enable()
{
	//	magic line that init static variables of GenericMap in the plugins
		GenericMap::copyAllStatics(m_schnapps->getStaticPointers());

	m_dockTab = new Surface_Selection_DockTab(m_schnapps, this);
	m_schnapps->addPluginDockTab(this, m_dockTab, "Surface_Selection");

	m_pointSprite = new CGoGN::Utils::PointSprite();
	m_selectedVerticesVBO = new Utils::VBO();

	m_selectedEdgesDrawer = new Utils::Drawer();
	m_selectedFacesDrawer = new Utils::Drawer();

	m_selectingCellDrawer = new Utils::Drawer();

	m_selectionSphereVBO = new Utils::VBO();

	registerShader(m_pointSprite);
	registerShader(m_selectedEdgesDrawer->getShader());
	registerShader(m_selectedFacesDrawer->getShader());
	registerShader(m_selectingCellDrawer->getShader());

	connect(m_schnapps, SIGNAL(selectedMapChanged(MapHandlerGen*, MapHandlerGen*)), this, SLOT(selectedMapChanged(MapHandlerGen*, MapHandlerGen*)));
	connect(m_schnapps, SIGNAL(selectedCellSelectorChanged(CellSelectorGen*)), this, SLOT(updateSelectedCellsRendering()));

	MapHandlerGen* cur = m_schnapps->getSelectedMap();
	if(cur)
	{
		connect(cur, SIGNAL(attributeAdded(unsigned int, const QString&)), this, SLOT(selectedMapAttributeAdded(unsigned int, const QString&)));
		connect(cur, SIGNAL(attributeModified(unsigned int, const QString&)), this, SLOT(selectedMapAttributeModified(unsigned int, const QString&)));
		connect(cur, SIGNAL(connectivityModified()), this, SLOT(selectedMapConnectivityModified()));
		m_selectionRadius = cur->getBBdiagSize() / 50.0f;
	}

	m_dockTab->updateMapParameters();

	return true;
}

void Surface_Selection_Plugin::disable()
{
	delete m_pointSprite;
	delete m_selectedVerticesVBO;

	delete m_selectedEdgesDrawer;
	delete m_selectedFacesDrawer;
	delete m_selectingCellDrawer;

	delete m_selectionSphereVBO;

	disconnect(m_schnapps, SIGNAL(selectedViewChanged(View*, View*)), this, SLOT(selectedViewChanged(View*, View*)));
	disconnect(m_schnapps, SIGNAL(mapRemoved(MapHandlerGen*)), this, SLOT(mapRemoved(MapHandlerGen*)));
}

void Surface_Selection_Plugin::draw(View *view)
{
}

void Surface_Selection_Plugin::drawMap(View* view, MapHandlerGen* map)
{
	if(map->isSelectedMap())
	{
		const MapParameters& p = h_parameterSet[map];
		if(p.positionAttribute.isValid())
		{
			unsigned int orbit = m_schnapps->getCurrentOrbit();
			CellSelectorGen* selector = m_schnapps->getSelectedSelector(orbit);
			if(selector)
			{
				unsigned int nbCells = map->getGenericMap()->getNbCells(orbit);
				switch(orbit)
				{
					case VERTEX : {
						m_pointSprite->setAttributePosition(m_selectedVerticesVBO);
						m_pointSprite->setSize(20 * map->getBBdiagSize() / nbCells);
						m_pointSprite->setColor(CGoGN::Geom::Vec4f(1.0f, 0.0f, 0.0f, 1.0f));
						m_pointSprite->setLightPosition(CGoGN::Geom::Vec3f(0.0f, 0.0f, 1.0f));

						m_pointSprite->enableVertexAttribs();
						glDrawArrays(GL_POINTS, 0, selector->getNbSelectedCells());
						m_pointSprite->disableVertexAttribs();

						if(m_selecting && m_selectingVertex.valid())
						{
							std::vector<PFP2::VEC3> selectionPoint;
							selectionPoint.push_back(p.positionAttribute[m_selectingVertex]);
							m_selectionSphereVBO->updateData(selectionPoint);

							m_pointSprite->setAttributePosition(m_selectionSphereVBO);
							m_pointSprite->setColor(CGoGN::Geom::Vec4f(0.0f, 0.0f, 1.0f, 0.5f));
							m_pointSprite->setLightPosition(CGoGN::Geom::Vec3f(0.0f, 0.0f, 1.0f));

							switch(p.selectionMethod)
							{
								case NormalAngle :
								case SingleCell : {
									m_pointSprite->setSize(30 * map->getBBdiagSize() / nbCells);
									break;
								}
								case WithinSphere : {
									m_pointSprite->setSize(m_selectionRadius);
									break;
								}
							}

							m_pointSprite->enableVertexAttribs();
							glEnable(GL_BLEND);
							glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
							glDrawArrays(GL_POINTS, 0, 1);
							glDisable(GL_BLEND);
							m_pointSprite->disableVertexAttribs();
						}
						break;
					}
					case EDGE : {
						m_selectedEdgesDrawer->callList();

						if(m_selecting && m_selectingEdge.valid())
						{
							switch(p.selectionMethod)
							{
								case NormalAngle :
								case SingleCell : {
									PFP2::MAP* m = static_cast<MapHandler<PFP2>*>(map)->getMap();
									m_selectingCellDrawer->newList(GL_COMPILE_AND_EXECUTE);
									m_selectingCellDrawer->lineWidth(6.0f);
									m_selectingCellDrawer->color3f(0.0f, 0.0f, 1.0f);
									m_selectingCellDrawer->begin(GL_LINES);
									m_selectingCellDrawer->vertex(p.positionAttribute[m_selectingEdge.dart]);
									m_selectingCellDrawer->vertex(p.positionAttribute[m->phi1(m_selectingEdge.dart)]);
									m_selectingCellDrawer->end();
									m_selectingCellDrawer->endList();
									break;
								}
								case WithinSphere : {
									std::vector<PFP2::VEC3> selectionPoint;
									selectionPoint.push_back(p.positionAttribute[m_selectingEdge.dart]);
									m_selectionSphereVBO->updateData(selectionPoint);

									m_pointSprite->setAttributePosition(m_selectionSphereVBO);
									m_pointSprite->setColor(CGoGN::Geom::Vec4f(0.0f, 0.0f, 1.0f, 0.5f));
									m_pointSprite->setLightPosition(CGoGN::Geom::Vec3f(0.0f, 0.0f, 1.0f));
									m_pointSprite->setSize(m_selectionRadius);

									m_pointSprite->enableVertexAttribs();
									glEnable(GL_BLEND);
									glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
									glDrawArrays(GL_POINTS, 0, 1);
									glDisable(GL_BLEND);
									m_pointSprite->disableVertexAttribs();
									break;
								}
							}
						}
						break;
					}
					case FACE : {
						m_selectedFacesDrawer->callList();

						if(m_selecting && m_selectingFace.valid())
						{
							switch(p.selectionMethod)
							{
								case NormalAngle :
								case SingleCell : {
									PFP2::MAP* m = static_cast<MapHandler<PFP2>*>(map)->getMap();
									m_selectingCellDrawer->newList(GL_COMPILE_AND_EXECUTE);
									m_selectingCellDrawer->color3f(0.0f, 0.0f, 1.0f);
									m_selectingCellDrawer->begin(GL_TRIANGLES);
									m_selectingCellDrawer->vertex(p.positionAttribute[m_selectingFace.dart]);
									m_selectingCellDrawer->vertex(p.positionAttribute[m->phi1(m_selectingFace.dart)]);
									m_selectingCellDrawer->vertex(p.positionAttribute[m->phi_1(m_selectingFace.dart)]);
									m_selectingCellDrawer->end();
									m_selectingCellDrawer->endList();
									break;
								}
								case WithinSphere : {
									std::vector<PFP2::VEC3> selectionPoint;
									selectionPoint.push_back(p.positionAttribute[m_selectingFace.dart]);
									m_selectionSphereVBO->updateData(selectionPoint);

									m_pointSprite->setAttributePosition(m_selectionSphereVBO);
									m_pointSprite->setColor(CGoGN::Geom::Vec4f(0.0f, 0.0f, 1.0f, 0.5f));
									m_pointSprite->setLightPosition(CGoGN::Geom::Vec3f(0.0f, 0.0f, 1.0f));
									m_pointSprite->setSize(m_selectionRadius);

									m_pointSprite->enableVertexAttribs();
									glEnable(GL_BLEND);
									glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
									glDrawArrays(GL_POINTS, 0, 1);
									glDisable(GL_BLEND);
									m_pointSprite->disableVertexAttribs();
									break;
								}
							}
						}
						break;
					}
				}
			}
		}
	}
}

void Surface_Selection_Plugin::keyPress(View* view, QKeyEvent* event)
{
	if(event->key() == Qt::Key_Shift)
	{
		view->setMouseTracking(true);
		m_selecting = true;
		view->updateGL();
	}
}

void Surface_Selection_Plugin::keyRelease(View* view, QKeyEvent* event)
{
	if(event->key() == Qt::Key_Shift)
	{
		view->setMouseTracking(false);
		m_selecting = false;
		view->updateGL();
	}
}

void Surface_Selection_Plugin::mousePress(View* view, QMouseEvent* event)
{
	if(m_selecting && (event->button() == Qt::LeftButton || event->button() == Qt::RightButton))
	{
		MapHandlerGen* mh = m_schnapps->getSelectedMap();
		const MapParameters& p = h_parameterSet[mh];
		if(p.positionAttribute.isValid())
		{
			unsigned int orbit = m_schnapps->getCurrentOrbit();
			CellSelectorGen* selector = m_schnapps->getSelectedSelector(orbit);
			if(selector)
			{
				PFP2::MAP* map = static_cast<MapHandler<PFP2>*>(mh)->getMap();

				switch(orbit)
				{
					case VERTEX : {
						CellSelector<PFP2::MAP, VERTEX>* cs = static_cast<CellSelector<PFP2::MAP, VERTEX>*>(selector);
						if(m_selectingVertex.valid())
						{
							switch(p.selectionMethod)
							{
								case SingleCell : {
									if(event->button() == Qt::LeftButton)
										cs->select(m_selectingVertex);
									else if(event->button() == Qt::RightButton)
										cs->unselect(m_selectingVertex);
									break;
								}
								case WithinSphere : {
									Algo::Surface::Selection::Collector_WithinSphere<PFP2> neigh(*map, p.positionAttribute, m_selectionRadius);
									neigh.collectAll(m_selectingVertex);
									if(event->button() == Qt::LeftButton)
										cs->select(neigh.getInsideVertices());
									else if(event->button() == Qt::RightButton)
										cs->unselect(neigh.getInsideVertices());
									break;
								}
								case NormalAngle : {
									if(p.normalAttribute.isValid())
									{
										Algo::Surface::Selection::Collector_NormalAngle<PFP2> neigh(*map, p.normalAttribute, m_normalAngleThreshold);
										neigh.collectAll(m_selectingVertex);
										if(event->button() == Qt::LeftButton)
											cs->select(neigh.getInsideVertices());
										else if(event->button() == Qt::RightButton)
											cs->unselect(neigh.getInsideVertices());
									}
									break;
								}
							}
							updateSelectedCellsRendering();
						}
						break;
					}
					case EDGE : {
						CellSelector<PFP2::MAP, EDGE>* cs = static_cast<CellSelector<PFP2::MAP, EDGE>*>(selector);
						if(m_selectingEdge.valid())
						{
							switch(p.selectionMethod)
							{
								case SingleCell : {
									if(event->button() == Qt::LeftButton)
										cs->select(m_selectingEdge);
									else if(event->button() == Qt::RightButton)
										cs->unselect(m_selectingEdge);
									break;
								}
								case WithinSphere : {
									Algo::Surface::Selection::Collector_WithinSphere<PFP2> neigh(*map, p.positionAttribute, m_selectionRadius);
									neigh.collectAll(m_selectingEdge);
									if(event->button() == Qt::LeftButton)
										cs->select(neigh.getInsideEdges());
									else if(event->button() == Qt::RightButton)
										cs->unselect(neigh.getInsideEdges());
									break;
								}
								case NormalAngle : {
									if(p.normalAttribute.isValid())
									{
										Algo::Surface::Selection::Collector_NormalAngle<PFP2> neigh(*map, p.normalAttribute, m_normalAngleThreshold);
										neigh.collectAll(m_selectingEdge);
										if(event->button() == Qt::LeftButton)
											cs->select(neigh.getInsideEdges());
										else if(event->button() == Qt::RightButton)
											cs->unselect(neigh.getInsideEdges());
									}
									break;
								}
							}
							updateSelectedCellsRendering();
						}
						break;
					}
					case FACE : {
						CellSelector<PFP2::MAP, FACE>* cs = static_cast<CellSelector<PFP2::MAP, FACE>*>(selector);
						if(m_selectingFace.valid())
						{
							switch(p.selectionMethod)
							{
								case SingleCell : {
									if(event->button() == Qt::LeftButton)
										cs->select(m_selectingFace);
									else if(event->button() == Qt::RightButton)
										cs->unselect(m_selectingFace);
									break;
								}
								case WithinSphere : {
									Algo::Surface::Selection::Collector_WithinSphere<PFP2> neigh(*map, p.positionAttribute, m_selectionRadius);
									neigh.collectAll(m_selectingFace);
									if(event->button() == Qt::LeftButton)
										cs->select(neigh.getInsideFaces());
									else if(event->button() == Qt::RightButton)
										cs->unselect(neigh.getInsideFaces());
									break;
								}
								case NormalAngle : {
									if(p.normalAttribute.isValid())
									{
										Algo::Surface::Selection::Collector_NormalAngle<PFP2> neigh(*map, p.normalAttribute, m_normalAngleThreshold);
										neigh.collectAll(m_selectingFace);
										if(event->button() == Qt::LeftButton)
											cs->select(neigh.getInsideFaces());
										else if(event->button() == Qt::RightButton)
											cs->unselect(neigh.getInsideFaces());
									}
									break;
								}
							}
							updateSelectedCellsRendering();
						}
						break;
					}
				}
			}
		}
	}
}

void Surface_Selection_Plugin::mouseMove(View* view, QMouseEvent* event)
{
	if(m_selecting)
	{
		MapHandlerGen* mh = m_schnapps->getSelectedMap();
		const MapParameters& p = h_parameterSet[mh];
		if(p.positionAttribute.isValid())
		{
			unsigned int orbit = m_schnapps->getCurrentOrbit();
			CellSelectorGen* selector = m_schnapps->getSelectedSelector(orbit);
			if(selector)
			{
				QPoint pixel(event->x(), event->y());
				qglviewer::Vec orig;
				qglviewer::Vec dir;
				view->camera()->convertClickToLine(pixel, orig, dir);

				qglviewer::Vec orig_inv = mh->getFrame()->coordinatesOf(orig);
				qglviewer::Vec dir_inv = mh->getFrame()->transformOf(dir);

				PFP2::VEC3 rayA(orig_inv.x, orig_inv.y, orig_inv.z);
				PFP2::VEC3 AB(dir_inv.x, dir_inv.y, dir_inv.z);

				PFP2::MAP* map = static_cast<MapHandler<PFP2>*>(mh)->getMap();

				switch(orbit)
				{
					case VERTEX : {
						Algo::Selection::vertexRaySelection<PFP2>(*map, p.positionAttribute, rayA, AB, m_selectingVertex);
						break;
					}
					case EDGE : {
						Algo::Selection::edgeRaySelection<PFP2>(*map, p.positionAttribute, rayA, AB, m_selectingEdge);
						break;
					}
					case FACE : {
						Algo::Selection::faceRaySelection<PFP2>(*map, p.positionAttribute, rayA, AB, m_selectingFace);
						break;
					}
				}

				view->updateGL();
			}
		}
	}
}

void Surface_Selection_Plugin::wheelEvent(View* view, QWheelEvent* event)
{
	if(m_selecting)
	{
		MapHandlerGen* mh = m_schnapps->getSelectedMap();
		const MapParameters& p = h_parameterSet[mh];

		switch(p.selectionMethod)
		{
			case SingleCell : {
				break;
			}
			case WithinSphere : {
				if(event->delta() > 0)
					m_selectionRadius *= 0.9f;
				else
					m_selectionRadius *= 1.1f;
				view->updateGL();
				break;
			}
			case NormalAngle : {
				if(event->delta() > 0)
					m_normalAngleThreshold *= 0.9f;
				else
					m_normalAngleThreshold *= 1.1f;
				// view->displayMessage(QString("Angle threshold : ") + m_normalAngleThreshold);
				break;
			}
		}
	}
}

void Surface_Selection_Plugin::viewLinked(View *view)
{
	MapHandlerGen* map = m_schnapps->getSelectedMap();
	if(map)
		m_selectionRadius = map->getBBdiagSize() / 50.0f;
}





void Surface_Selection_Plugin::selectedMapChanged(MapHandlerGen *prev, MapHandlerGen *cur)
{
	m_dockTab->updateMapParameters();
	if(prev)
	{
		disconnect(prev, SIGNAL(attributeAdded(unsigned int, const QString&)), this, SLOT(selectedMapAttributeAdded(unsigned int, const QString&)));
		disconnect(prev, SIGNAL(attributeModified(unsigned int, const QString&)), this, SLOT(selectedMapAttributeModified(unsigned int, const QString&)));
		disconnect(prev, SIGNAL(connectivityModified()), this, SLOT(selectedMapConnectivityModified()));
	}
	if(cur)
	{
		connect(cur, SIGNAL(attributeAdded(unsigned int, const QString&)), this, SLOT(selectedMapAttributeAdded(unsigned int, const QString&)));
		connect(cur, SIGNAL(attributeModified(unsigned int, const QString&)), this, SLOT(selectedMapAttributeModified(unsigned int, const QString&)));
		connect(cur, SIGNAL(connectivityModified()), this, SLOT(selectedMapConnectivityModified()));
		m_selectionRadius = cur->getBBdiagSize() / 50.0f;
	}

	if (cur==NULL)
		m_dockTab->setDisabled(true);
	else
		m_dockTab->setDisabled(false);
}

void Surface_Selection_Plugin::updateSelectedCellsRendering()
{
	MapHandlerGen* map = m_schnapps->getSelectedMap();
	const MapParameters& p = h_parameterSet[map];
	if(p.positionAttribute.isValid())
	{
		unsigned int orbit = m_schnapps->getCurrentOrbit();
		CellSelectorGen* selector = m_schnapps->getSelectedSelector(orbit);
		switch(orbit)
		{
			case VERTEX : {
				CellSelector<PFP2::MAP, VERTEX>* cs = static_cast<CellSelector<PFP2::MAP, VERTEX>*>(selector);
				const std::vector<Vertex>& selectedCells = cs->getSelectedCells();
				std::vector<PFP2::VEC3> selectedPoints;
				for(std::vector<Vertex>::const_iterator v = selectedCells.begin(); v != selectedCells.end(); ++v)
					selectedPoints.push_back(p.positionAttribute[*v]);
				m_selectedVerticesVBO->updateData(selectedPoints);
				break;
			}
			case EDGE : {
				PFP2::MAP* m = static_cast<MapHandler<PFP2>*>(map)->getMap();

				CellSelector<PFP2::MAP, EDGE>* cs = static_cast<CellSelector<PFP2::MAP, EDGE>*>(selector);
				const std::vector<Edge>& selectedCells = cs->getSelectedCells();

				m_selectedEdgesDrawer->newList(GL_COMPILE);
				m_selectedEdgesDrawer->lineWidth(3.0f);
				m_selectedEdgesDrawer->color3f(1.0f, 0.0f, 0.0f);
				m_selectedEdgesDrawer->begin(GL_LINES);
				for(std::vector<Edge>::const_iterator e = selectedCells.begin(); e != selectedCells.end(); ++e)
				{
					m_selectedEdgesDrawer->vertex(p.positionAttribute[(*e).dart]);
					m_selectedEdgesDrawer->vertex(p.positionAttribute[m->phi1((*e).dart)]);
				}
				m_selectedEdgesDrawer->end();
				m_selectedEdgesDrawer->endList();
				break;
			}
			case FACE : {
				PFP2::MAP* m = static_cast<MapHandler<PFP2>*>(map)->getMap();

				CellSelector<PFP2::MAP, FACE>* cs = static_cast<CellSelector<PFP2::MAP, FACE>*>(selector);
				const std::vector<Face>& selectedCells = cs->getSelectedCells();

				m_selectedFacesDrawer->newList(GL_COMPILE);
				m_selectedFacesDrawer->color3f(1.0f, 0.0f, 0.0f);
				m_selectedFacesDrawer->begin(GL_TRIANGLES);
				for(std::vector<Face>::const_iterator f = selectedCells.begin(); f != selectedCells.end(); ++f)
				{
					m_selectedFacesDrawer->vertex(p.positionAttribute[(*f).dart]);
					m_selectedFacesDrawer->vertex(p.positionAttribute[m->phi1((*f).dart)]);
					m_selectedFacesDrawer->vertex(p.positionAttribute[m->phi_1((*f).dart)]);
				}
				m_selectedFacesDrawer->end();
				m_selectedFacesDrawer->endList();
				break;
			}
		}
	}

	foreach(View* view, l_views)
	{
		if(view->isLinkedToMap(map))
			view->updateGL();
	}
}





void Surface_Selection_Plugin::selectedMapAttributeAdded(unsigned int orbit, const QString& name)
{
	if(orbit == VERTEX)
		m_dockTab->addVertexAttribute(name);
}

void Surface_Selection_Plugin::selectedMapAttributeModified(unsigned int orbit, const QString &name)
{
	if(orbit == VERTEX)
	{
		MapHandlerGen* map = static_cast<MapHandlerGen*>(QObject::sender());
		const MapParameters& p = h_parameterSet[map];
		if(p.positionAttribute.isValid() && QString::fromStdString(p.positionAttribute.name()) == name)
			updateSelectedCellsRendering();
	}
}

void Surface_Selection_Plugin::selectedMapConnectivityModified()
{
	MapHandlerGen* map = static_cast<MapHandlerGen*>(QObject::sender());
	const MapParameters& p = h_parameterSet[map];
	if(p.positionAttribute.isValid())
		updateSelectedCellsRendering();
}





void Surface_Selection_Plugin::changePositionAttribute(const QString& map, const QString& name)
{
	MapHandlerGen* m = m_schnapps->getMap(map);
	if(m)
	{
		MapHandler<PFP2>* mh = static_cast<MapHandler<PFP2>*>(m);
		h_parameterSet[m].positionAttribute = mh->getAttribute<PFP2::VEC3, VERTEX>(name);
		if(m->isSelectedMap())
			m_dockTab->updateMapParameters();
	}
}

void Surface_Selection_Plugin::changeNormalAttribute(const QString& map, const QString& name)
{
	MapHandlerGen* m = m_schnapps->getMap(map);
	if(m)
	{
		MapHandler<PFP2>* mh = static_cast<MapHandler<PFP2>*>(m);
		h_parameterSet[m].normalAttribute = mh->getAttribute<PFP2::VEC3, VERTEX>(name);
		if(m->isSelectedMap())
			m_dockTab->updateMapParameters();
	}
}

void Surface_Selection_Plugin::changeSelectionMethod(const QString& map, unsigned int method)
{
	MapHandlerGen* m = m_schnapps->getMap(map);
	if(m)
	{
		h_parameterSet[m].selectionMethod = SelectionMethod(method);
		if(m->isSelectedMap())
			m_dockTab->updateMapParameters();
	}
}

Q_EXPORT_PLUGIN2(Surface_Selection_Plugin, Surface_Selection_Plugin)

} // namespace SCHNApps

} // namespace CGoGN
