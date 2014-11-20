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
#ifndef _TEXTURE_EXAMPLE_
#define _TEXTURE_EXAMPLE_

#include <iostream>


#include "Utils/Qt/qtSimple.h"
#include "Utils/textures.h"
#include "Utils/Shaders/shaderSimpleTexture.h"
#include "Utils/Shaders/shaderPhongTexture.h"
#include "Topology/generic/parameters.h"
#include "Topology/map/embeddedMap2.h"
#include "Algo/Render/GL2/mapRender.h"
#include "Algo/Import/importObjTex.h"


// forward definitions (minimize includes)
namespace CGoGN { namespace Algo { namespace Render { namespace GL2 { class MapRender; }}}}
namespace CGoGN { namespace Utils { class VBO; } }

using namespace CGoGN ;

struct PFP: public PFP_STANDARD
{
	// definition of the map
	typedef EmbeddedMap2 MAP ;
};

typedef PFP::MAP MAP ;
typedef PFP::VEC3 VEC3 ;

/**
 * A class for a little interface and rendering
 */

class TexView: public Utils::QT::SimpleQT
{
	Q_OBJECT
protected:
	void computeImage();
	void computeTore();
public:

	MAP myMap ;
	Algo::Surface::Import::OBJModel<PFP> m_obj;

	// VBO
	Utils::VBO* m_positionVBO;
	Utils::VBO* m_texcoordVBO;
	Utils::VBO* m_normalVBO;
	unsigned int m_nbIndices;

	Utils::Texture<2,Geom::Vec3uc>* m_texture;

	// shader simple texture
	Utils::ShaderSimpleTexture* m_shader;
	Utils::ShaderPhongTexture* m_shader2;

	bool m_phong;

	/// filename of loaded mesh
	std::string m_fileNameMesh;
	/// filename of loaded texture
	std::string m_fileNameTex;

	TexView();

	~TexView();

	void init(const std::string& fnm, const std::string& fnt);

	// callbacks of simpleQT to overdefine:
	void cb_redraw();

	void cb_initGL();

	void cb_keyPress(int code);

};

#endif
