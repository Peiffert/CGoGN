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
#include "Utils/Shaders/shaderSimpleDepth.h"

namespace CGoGN
{

namespace Utils
{

#include "shaderSimpleDepth.vert"
#include "shaderSimpleDepth.frag"


ShaderSimpleDepth::ShaderSimpleDepth(bool doubleSided):
	m_with_color(false),
	m_ambiant(Geom::Vec4f(0.05f,0.05f,0.1f,0.0f)),
	m_diffuse(Geom::Vec4f(0.1f,1.0f,0.1f,0.0f)),
	m_lightPos(Geom::Vec3f(10.0f,10.0f,1000.0f)),
	m_vboPos(NULL),
	m_vboColor(NULL)
{
	m_nameVS = "ShaderSimpleDepth_vs";
	m_nameFS = "ShaderSimpleDepth_fs";
//	m_nameGS = "ShaderSimpleDepth_gs";

	// get choose GL defines (2 or 3)
	// ans compile shaders
	std::string glxvert(*GLSLShader::DEFINES_GL);
	glxvert.append(vertexShaderText);
	std::string glxfrag(*GLSLShader::DEFINES_GL);
	if (doubleSided)
		glxfrag.append("#define DOUBLE_SIDED\n");
	glxfrag.append(fragmentShaderText);

	loadShadersFromMemory(glxvert.c_str(), glxfrag.c_str());

	// and get and fill uniforms
	getLocations();
	sendParams();
}

void ShaderSimpleDepth::getLocations()
{
	bind();
	*m_unif_ambiant   = glGetUniformLocation(this->program_handler(), "materialAmbient");
	*m_unif_diffuse   = glGetUniformLocation(this->program_handler(), "materialDiffuse");
	*m_unif_lightPos  = glGetUniformLocation(this->program_handler(), "lightPosition");
	unbind();
}

void ShaderSimpleDepth::sendParams()
{
	bind();
	glUniform4fv(*m_unif_ambiant,  1, m_ambiant.data());
	glUniform4fv(*m_unif_diffuse,  1, m_diffuse.data());
	glUniform3fv(*m_unif_lightPos, 1, m_lightPos.data());
	unbind();
}

void ShaderSimpleDepth::setAmbiant(const Geom::Vec4f& ambiant)
{
	bind();
	glUniform4fv(*m_unif_ambiant,1, ambiant.data());
	m_ambiant = ambiant;
	unbind();
}

void ShaderSimpleDepth::setDiffuse(const Geom::Vec4f& diffuse)
{
	bind();
	glUniform4fv(*m_unif_diffuse,1, diffuse.data());
	m_diffuse = diffuse;
	unbind();
}


void ShaderSimpleDepth::setLightPosition(const Geom::Vec3f& lightPos)
{
	bind();
	glUniform3fv(*m_unif_lightPos,1,lightPos.data());
	m_lightPos = lightPos;
	unbind();
}


void ShaderSimpleDepth::setParams(const Geom::Vec4f& ambiant, const Geom::Vec4f& diffuse, const Geom::Vec3f& lightPos)
{
	m_ambiant = ambiant;
	m_diffuse = diffuse;
	m_lightPos = lightPos;
	sendParams();
}

unsigned int ShaderSimpleDepth::setAttributeColor(VBO* vbo)
{
	m_vboColor = vbo;
	if (!m_with_color)
	{
		m_with_color=true;
		// set the define and recompile shader
		std::string gl3vert(*GLSLShader::DEFINES_GL);
		gl3vert.append("#define WITH_COLOR 1\n");
		gl3vert.append(vertexShaderText);
		std::string gl3frag(*GLSLShader::DEFINES_GL);
		gl3frag.append("#define WITH_COLOR 1\n");
		gl3frag.append(fragmentShaderText);
		loadShadersFromMemory(gl3vert.c_str(), gl3frag.c_str());

		// and treat uniforms
		getLocations();
		sendParams();
	}
	// bind th VA with WBO
	bind();
	unsigned int id = bindVA_VBO("VertexColor", vbo);
	unbind();
	return id;
}

void ShaderSimpleDepth::unsetAttributeColor()
{
	m_vboColor = NULL;
	if (m_with_color)
	{
		m_with_color = false;
		// unbind the VA
		bind();
		unbindVA("VertexColor");
		unbind();
		// recompile shader
		std::string gl3vert(*GLSLShader::DEFINES_GL);
		gl3vert.append(vertexShaderText);
		std::string gl3frag(*GLSLShader::DEFINES_GL);
		gl3frag.append(fragmentShaderText);
		loadShadersFromMemory(gl3vert.c_str(), gl3frag.c_str());
		// and treat uniforms
		getLocations();
		sendParams();
	}
}

void ShaderSimpleDepth::restoreUniformsAttribs()
{
	getLocations();
	sendParams();

	bind();
	bindVA_VBO("VertexPosition", m_vboPos);
	if (m_vboColor)
		bindVA_VBO("VertexColor", m_vboColor);

	unbind();
}

unsigned int ShaderSimpleDepth::setAttributePosition(VBO* vbo)
{
	m_vboPos = vbo;
	bind();
	unsigned int id = bindVA_VBO("VertexPosition", vbo);
	unbind();
	return id;
}


} // namespace Utils

} // namespace CGoGN
