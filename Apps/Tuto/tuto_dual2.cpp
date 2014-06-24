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

#include <iostream>

#include "Topology/generic/parameters.h"
#include "Topology/map/embeddedMap2.h"

#include "Geometry/vector_gen.h"

#include "Algo/Import/import.h"
#include "Algo/Export/export.h"

#include "Algo/Modelisation/subdivision.h"

using namespace CGoGN ;

/**
 * Struct that contains some informations about the types of the manipulated objects
 * Mainly here to be used by the algorithms that are parameterized by it
 */
struct PFP: public PFP_STANDARD
{
	// definition of the map
	typedef EmbeddedMap2 MAP;
};

typedef PFP::MAP MAP ;
typedef PFP::VEC3 VEC3 ;

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		CGoGNout << "Usage : " << argv[0] << " filename" << CGoGNendl;
		return 0;
	}

	std::string filename(argv[1]);

	// declaration of the map
	MAP myMap;

	std::vector<std::string> attrNames ;
	Algo::Surface::Import::importMesh<PFP>(myMap, argv[1], attrNames);

	// get a handler to the 3D vector attribute created by the import
	VertexAttribute<VEC3, MAP> position = myMap.getAttribute<VEC3, VERTEX, MAP>(attrNames[0]);

	FaceAttribute<VEC3, MAP> positionF = myMap.getAttribute<VEC3, FACE, MAP>("position") ;
	if(!positionF.isValid())
		positionF = myMap.addAttribute<VEC3, FACE, MAP>("position") ;

	Algo::Surface::Geometry::computeCentroidFaces<PFP>(myMap, position, positionF) ;

	myMap.computeDual();
	position = positionF ;

	Algo::Surface::Export::exportOFF<PFP>(myMap, position, "result.off");
	std::cout << "Exported" << std::endl;

	return 0;
}
