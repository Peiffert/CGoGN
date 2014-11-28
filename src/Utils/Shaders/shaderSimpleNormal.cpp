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

#include <GL/glew.h>
#include "Utils/Shaders/shaderSimpleNormal.h"

namespace CGoGN
{

namespace Utils
{

#include "shaderSimpleNormal.vert"
#include "shaderSimpleNormal.frag"


ShaderSimpleNormal::ShaderSimpleNormal(bool doubleSided):
	m_vboPos(NULL),
	m_vboColor(NULL)
{
	m_nameVS = "ShaderSimpleNormal_vs";
	m_nameFS = "ShaderSimpleNormal_fs";
//	m_nameGS = "ShaderSimpleNormal_gs";

	// get choose GL defines (2 or 3)
	// ans compile shaders
	std::string glxvert(*GLSLShader::DEFINES_GL);
	glxvert.append(vertexShaderText);
	std::string glxfrag(*GLSLShader::DEFINES_GL);
	if (doubleSided)
		glxfrag.append("#define DOUBLE_SIDED\n");
	glxfrag.append(fragmentShaderText);

	loadShadersFromMemory(glxvert.c_str(), glxfrag.c_str());

}

void ShaderSimpleNormal::restoreUniformsAttribs()
{
	bind();
	bindVA_VBO("VertexPosition", m_vboPos);
	if (m_vboColor)
		bindVA_VBO("VertexColor", m_vboColor);

	unbind();
}

unsigned int ShaderSimpleNormal::setAttributePosition(VBO* vbo)
{
	m_vboPos = vbo;
	bind();
	unsigned int id = bindVA_VBO("VertexPosition", vbo);
	unbind();
	return id;
}


} // namespace Utils

} // namespace CGoGN
