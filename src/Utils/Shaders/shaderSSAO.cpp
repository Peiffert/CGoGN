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
#include "Utils/Shaders/shaderSSAO.h"

namespace CGoGN
{

namespace Utils
{

#include "shaderSSAO.vert"
#include "shaderSSAO.frag"


ShaderSSAO::ShaderSSAO(bool doubleSided):
    m_with_color(false),
    m_ambiant(Geom::Vec4f(0.05f,0.05f,0.1f,0.0f)),
    m_diffuse(Geom::Vec4f(0.1f,1.0f,0.1f,0.0f)),
    m_lightPos(Geom::Vec3f(10.0f,10.0f,1000.0f)),
    m_vboPos(NULL),
    m_vboColor(NULL)
{
    m_nameVS = "ShaderSSAO_vs";
    m_nameFS = "ShaderSSAO_fs";
//	m_nameGS = "ShaderSSAO_gs";

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

void ShaderSSAO::getLocations()
{
    bind();
    *m_unif_ambiant   = glGetUniformLocation(this->program_handler(), "materialAmbient");
    *m_unif_diffuse   = glGetUniformLocation(this->program_handler(), "materialDiffuse");
    *m_unif_lightPos  = glGetUniformLocation(this->program_handler(), "lightPosition");
    *m_unif_ssaoRadius = glGetUniformLocation(this->program_handler(), "uRadius");
    *m_unif_ssaoPower = glGetUniformLocation(this->program_handler(), "uPower");
    *m_unif_ssaoKernelSize = glGetUniformLocation(this->program_handler(), "uKernelSize");
    *m_unif_kernel = glGetUniformLocation(this->program_handler(), "uKernelOffsets");
    *m_unif_FBOTextureZDepth = glGetUniformLocation(this->program_handler(), "FBOTextureZDepth");
    *m_unif_FBOTextureNormal = glGetUniformLocation(this->program_handler(), "FBOTextureNormal");
    unbind();
}

void ShaderSSAO::sendParams()
{
    bind();
    glUniform4fv(*m_unif_ambiant,  1, m_ambiant.data());
    glUniform4fv(*m_unif_diffuse,  1, m_diffuse.data());
    glUniform3fv(*m_unif_lightPos, 1, m_lightPos.data());
/*    for(int i=0; i<=m_FBOTexture ;i++)
        glUniform1i(*m_unif_FBOTexture, i);*/
    unbind();
}

void ShaderSSAO::setAmbiant(const Geom::Vec4f& ambiant)
{
    bind();
    glUniform4fv(*m_unif_ambiant,1, ambiant.data());
    m_ambiant = ambiant;
    unbind();
}
/* à supprimer */
void ShaderSSAO::setDiffuse(const Geom::Vec4f& diffuse)
{
    bind();
    glUniform4fv(*m_unif_diffuse,1, diffuse.data());
    m_diffuse = diffuse;
    unbind();
}

void ShaderSSAO::setFBOTextureZDepth(CGoGNGLuint texId)
{
    bind();
    glBindTexture(GL_TEXTURE_2D, *texId);
    glUniform1i(*m_unif_FBOTextureZDepth, 0);
    unbind();
}

void ShaderSSAO::setFBOTextureNormal(CGoGNGLuint texId)
{
    bind();
    glBindTexture(GL_TEXTURE_2D, *texId);
    glUniform1i(*m_unif_FBOTextureNormal, 0);
    unbind();
}

void ShaderSSAO::setLightPosition(const Geom::Vec3f& lightPos)
{
    bind();
    glUniform3fv(*m_unif_lightPos,1,lightPos.data());
    m_lightPos = lightPos;
    unbind();
}


void ShaderSSAO::setParams(const Geom::Vec4f& ambiant, const Geom::Vec4f& diffuse, const Geom::Vec3f& lightPos)
{
    m_ambiant = ambiant;
    m_diffuse = diffuse;
    m_lightPos = lightPos;
    sendParams();
}

void ShaderSSAO::setParams(const float ssaoRadius, const float ssaoPower, const int ssaoKernelSize, const int ssaoNoiseSize)
{
    m_ssaoRadius = ssaoRadius;
    m_ssaoPower = ssaoPower;
    m_ssaoKernelSize = ssaoKernelSize;
    m_ssaoNoiseSize = ssaoNoiseSize;
    sendParams();
}

unsigned int ShaderSSAO::setAttributeColor(VBO* vbo)
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

void ShaderSSAO::unsetAttributeColor()
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

void ShaderSSAO::restoreUniformsAttribs()
{
    getLocations();
    sendParams();

    bind();
    bindVA_VBO("VertexPosition", m_vboPos);
    if (m_vboColor)
        bindVA_VBO("VertexColor", m_vboColor);

    unbind();
}

unsigned int ShaderSSAO::setAttributePosition(VBO* vbo)
{
    m_vboPos = vbo;
    bind();
    unsigned int id = bindVA_VBO("VertexPosition", vbo);
    unbind();
    return id;
}

void ShaderSSAO::generateSsaoTexNoise() {
    glActiveTexture(GL_TEXTURE2);
    glGenTextures(1, &m_texSsaoNoise);
    glBindTexture(GL_TEXTURE_2D, m_texSsaoNoise);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
}

void ShaderSSAO::resizeSsaoKernel() {

    //	generate kernel:
    m_kernel = new Geom::Vec3f[m_ssaoKernelSize];
    for (int i = 0; i < m_ssaoKernelSize; ++i) {
        // On choisit un point dans le "cylindre"
        m_kernel[i] = Geom::Vec3f(
            (float)(rand()%200001)/100000.0f - 1.0f, // entre -1 et 1
            (float)(rand()%200001)/100000.0f - 1.0f, // entre -1 et 1
            (float)(rand()%100001)/100000.0f); // entre 0 et 1
        // On normalise pour transformer le "cylindre" en sphère
        m_kernel[i].normalize();

        // On améliore la distribution ??
        float scale = (float)i / (float)m_ssaoKernelSize;

        // lerp(start, stop, amt(entre 0 et 1)) = retourne (stop-start)*amp
        m_kernel[i] *= (1.0f-0.1f)*scale*scale;
    }
}

void ShaderSSAO::resizeSsaoNoise() {

//	generate noise data:
    int noiseDataSize = m_ssaoNoiseSize * m_ssaoNoiseSize;
    m_noiseData = new Geom::Vec3f[noiseDataSize]; //new(std::nothrow_t) ???
    for (int i = 0; i < noiseDataSize; ++i) {
        m_noiseData[i] = Geom::Vec3f(
            (float)(rand()%200001)/100000.0f - 1.0f, // entre -1 et 1
            (float)(rand()%200001)/100000.0f - 1.0f, // entre -1 et 1
            0.0f
        );
        m_noiseData[i].normalize();
    }

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, m_ssaoNoiseSize, m_ssaoNoiseSize, 0, GL_RGB, GL_FLOAT, m_noiseData);
    //glBindTexture(GL_TEXTURE_2D, texID);
//	reize noise texture & upload:
    //m_texSsaoNoise->bind();
    //???? m_texSsaoNoise->image(0, texSsaoNoise_->getFormat(), ssaoNoiseSize_, ssaoNoiseSize_, GL_RGB, GL_FLOAT, noiseData);
    //frm::Texture2d::bindNone();

    //delete[] noiseData;
}

} // namespace Utils

} // namespace CGoGN


