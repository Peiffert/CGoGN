/*******************************************************************************
* CGoGN: Combinatorial and Geometric modeling with Generic N-dimensional Maps  *
* version 0.1                                                                  *
* Copyright (C) 2009, IGG Team, LSIIT, University of Strasbourg                *
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
* Web site: http://cgogn.unistra.fr/                         			       *
* Contact information: cgogn@unistra.fr                                        *
*                                                                              *
*******************************************************************************/

#include <iostream>

#include "Utils/Qt/qtSimple.h"

#include "Topology/generic/functor.h"
#include "Topology/generic/parameters.h"
#include "Topology/map/embeddedMap3.h"

#include "Geometry/vector_gen.h"

#include "Algo/Render/GL2/topo3Render.h"
#include "Algo/Render/GL2/topo3PrimalRender.h"
#include "Algo/Render/GL2/topoRender.h"

using namespace CGoGN ;

struct PFP: public PFP_STANDARD
{
	// definition of the map
	typedef EmbeddedMap3 MAP ;
};

typedef PFP::MAP MAP ;
typedef PFP::VEC3 VEC3 ;

class SimpleMap3 : public Utils::QT::SimpleQT
{
	Q_OBJECT

public:
	MAP myMap ;
	SelectorTrue allDarts ;

	VertexAttribute<VEC3, MAP> position ;

	Algo::Render::GL2::Topo3RenderMap<PFP>* m_render_topo;
	Algo::Render::GL2::TopoRender* m_render_topo_boundary;
	Algo::Render::GL2::Topo3PrimalRender<PFP>* m_render_topo_primal;

	SimpleMap3() ;

	void initGUI() ;

	void cb_initGL() ;
	void cb_redraw() ;
    void cb_keyPress(int code);
};
