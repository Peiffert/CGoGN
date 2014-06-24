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

#ifndef _TEST_TRAVERSOR2_
#define _TEST_TRAVERSOR2_

//#define USE_GMAP

//#define PRIMAL_TOPO 1

#include "Topology/generic/parameters.h"

#include "Topology/gmap/embeddedGMap2.h"
#include "Topology/map/embeddedMap2.h"

#include "Algo/Render/GL2/topoRender.h"

#include "ui_test_traversor2.h"
#include "Utils/Qt/qtui.h"
#include "Utils/Qt/qtSimple.h"
#include "Utils/cgognStream.h"


using namespace CGoGN ;

/**
 * Struct that contains some informations about the types of the manipulated objects
 * Mainly here to be used by the algorithms that are parameterized by it
 */
struct PFP: public PFP_STANDARD
{
	// definition of the type of the map
#ifdef USE_GMAP
	typedef EmbeddedGMap2 MAP;
#else
	typedef EmbeddedMap2 MAP;
#endif
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
		dm(myMap),
		m_shift(0.01f)
	{}

	void cb_redraw();
	void cb_initGL();
	void cb_mousePress(int button, int x, int y);
	void cb_keyPress(int code);
	void cb_Open();
	void cb_Save();

	Utils::QT::uiDockInterface dock;

protected:
	// declaration of the map
	MAP myMap;

	VertexAttribute<VEC3, MAP> position;
	DartAttribute<VEC3, MAP> colorDarts;

	// render (for the topo)
#ifdef USE_GMAP
	Algo::Render::GL2::TopoRenderGMap<PFP>* m_render_topo;
#else
	Algo::Render::GL2::TopoRenderMap<PFP>* m_render_topo;
#endif

	Dart m_selected;
	Dart m_selected2;
	DartMarker<MAP> dm;
	float m_shift;

	// just for more compact writing
	inline Dart PHI1(Dart d)	{return myMap.phi1(d);}
	inline Dart PHI_1(Dart d)	{return myMap.phi_1(d);}
	inline Dart PHI2(Dart d)	{return myMap.phi2(d);}
	template<int X>
	Dart PHI(Dart d)	{return myMap.phi<X>(d);}

public:
	// example of simple map creation
	void createMap(int n);
//	void updateMap();
	void importMesh(std::string& filename);

public slots:
	void traversors(int x);
	void svg();
	void updateMap();
	void width(int w);
};

#endif
