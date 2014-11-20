/*******************************************************************************
* CGoGN: Combinatorial and Geometric modeling with Generic N-dimensional Maps  *
* version 0.1                                                                  *
* Copyright (C) 2009-2012, IGG Team, LSIIT, University of Strasbourg           *
*                                                                              *
* This library is free software; you can redistribute it and/or modify it      *
* under the terms of the GNU Lesser General Public License as published by the *
* Free Software Foundation; either version 2.1 of the License, or (at your     *
* option) any later version.                                                   *
*                                                                              *
* This library is distributed in the hope that it will be useful, but WITHOUT  *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  *
* for more details.                                                            *
*                                                                              *
* You should have received a copy of the GNU Lesser General Public License     *
* along with this library; if not, write to the Free Software Foundation,      *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.           *
*                                                                              *
* Web site: http://cgogn.unistra.fr/                                           *
* Contact information: cgogn@unistra.fr                                        *
*                                                                              *
*******************************************************************************/

#ifndef _TUTO_OPER3_
#define _TUTO_OPER3_

//#define PRIMAL_TOPO 1

#include "Topology/generic/parameters.h"
#include "Topology/map/embeddedMap3.h"

#ifdef PRIMAL_TOPO
    #include "Algo/Render/GL2/topo3PrimalRender.h"
#else
    #include "Algo/Render/GL2/topo3Render.h"
#endif

#include "Algo/Render/GL2/topoRender.h"
#include "Algo/Geometry/boundingbox.h"

#include "ui_tuto_oper3.h"
#include "Utils/Qt/qtui.h"
#include "Utils/Qt/qtSimple.h"
#include "Utils/cgognStream.h"
#include "Utils/frameManipulator.h"

using namespace CGoGN ;

/**
 * Struct that contains some informations about the types of the manipulated objects
 * Mainly here to be used by the algorithms that are parameterized by it
 */
struct PFP: public PFP_STANDARD
{
	// definition of the type of the map
	typedef EmbeddedMap3 MAP;
};

typedef PFP::MAP MAP ;
typedef PFP::VEC3 VEC3 ;

class MyQT: public Utils::QT::SimpleQT
{
	Q_OBJECT

public:
	MyQT() :
		m_render_topo(NULL),
		m_selected(NIL),
		m_selected2(NIL),
		m_shift(0.01f),
		m_ex1(0.9f),
		m_ex2(0.9f),
		m_ex3(0.9f),
		clip_volume(true),
		hide_clipping(false)
	{}

	void cb_redraw();
	void cb_initGL();
	void cb_mousePress(int button, int x, int y);
	void cb_mouseRelease(int button, int x, int y);
	void cb_mouseMove(int button, int x, int y);
	void cb_keyPress(int code);
	void cb_Open();
	void cb_Save();

	Utils::QT::uiDockInterface dock;

protected:
	// declaration of the map
	MAP myMap;

	VertexAttribute<VEC3, MAP> position;

//	SelectorDartNoBoundary<MAP> nb;

	Geom::BoundingBox<VEC3> bb;

	// render (for the topo)
#ifdef PRIMAL_TOPO
	Algo::Render::GL2::Topo3PrimalRender<PFP>* m_render_topo;
#else
	Algo::Render::GL2::Topo3RenderMap<PFP>* m_render_topo;
#endif
	Algo::Render::GL2::TopoRender* m_render_topo_boundary;
	Dart m_selected;
	Dart m_selected2;
	std::vector<Dart> m_selecteds;
	float m_shift;

	float m_ex1, m_ex2, m_ex3;

	// for clipping plane manipulation
    bool clip_volume;
    bool hide_clipping;
	Utils::Pickable* m_PlanePick;
	Utils::FrameManipulator* m_frame;
	unsigned int m_pickedAxis;
	int m_begX;
	int m_begY;

	// just for more compact writing
	inline Dart PHI1(Dart d)	{ return myMap.phi1(d); }
	inline Dart PHI_1(Dart d)	{ return myMap.phi_1(d); }
	inline Dart PHI2(Dart d)	{ return myMap.phi2(d); }
	inline Dart PHI3(Dart d)	{ return myMap.phi3(d); }
	template<int X>
	Dart PHI(Dart d)			{ return myMap.phi<X>(d); }

	int clip_id1;
	int clip_id2;
	int clip_id3;

	Utils::ClippingShader* m_sh1;
	Utils::ClippingShader* m_sh2;
	Utils::ClippingShader* m_sh3;

public:
	// example of simple map creation
	void createMap(int n);
    void createMapTets();
	void updateMap();
	void importMesh(std::string& filename);

public slots:
	void operation(int x);
	void svg();
	void width(int w);

	void clipping_onoff(bool x);
	void hide_onoff(bool x);
};

#endif
