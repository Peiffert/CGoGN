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


ShaderSSAO::ShaderSSAO(bool doubleSided)
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

    m_vboPos = new Utils::VBO();
    m_vboPos->setDataSize(3);
    m_vboPos->allocate(4);
    Geom::Vec3f* ptrPos = reinterpret_cast<Geom::Vec3f*>(m_vboPos->lockPtr());

    ptrPos[0] = Geom::Vec3f(-1,-1, 0.9999999f);
    ptrPos[1] = Geom::Vec3f( 1,-1, 0.9999999f);
    ptrPos[2] = Geom::Vec3f( 1, 1, 0.9999999f);
    ptrPos[3] = Geom::Vec3f(-1, 1, 0.9999999f);

    m_vboPos->releasePtr();

    bindVA_VBO("VertexPosition", m_vboPos);

    m_vboTexCoord = new Utils::VBO();
    m_vboTexCoord->setDataSize(2);

    m_vboTexCoord = new Utils::VBO();
    m_vboTexCoord->setDataSize(2);
    m_vboTexCoord->allocate(4);
    Geom::Vec2f* ptrTex = reinterpret_cast<Geom::Vec2f*>(m_vboTexCoord->lockPtr());

    ptrTex[0] = Geom::Vec2f(0.0,0.0);
    ptrTex[1] = Geom::Vec2f(1.0,0.0);
    ptrTex[2] = Geom::Vec2f(1.0,1.0);
    ptrTex[3] = Geom::Vec2f(0.0,1.0);

    m_vboTexCoord->releasePtr();

    bindVA_VBO("VertexTexCoord", m_vboTexCoord);
}

void ShaderSSAO::getLocations()
{
    bind();
    *m_unif_ssaoRadius = glGetUniformLocation(this->program_handler(), "uRadius");
    *m_unif_ssaoPower = glGetUniformLocation(this->program_handler(), "uPower");
    *m_unif_ssaoKernelSize = glGetUniformLocation(this->program_handler(), "uKernelSize");
    *m_unif_kernel = glGetUniformLocation(this->program_handler(), "uKernelOffsets");
    *m_unif_FBOTextureNormal = glGetUniformLocation(this->program_handler(), "FBOTextureNormal");
    unbind();
}

void ShaderSSAO::sendParams()
{
    bind();
    //glUniform4fv(*m_unif_ambiant,  1, m_ambiant.data());
    //glUniform4fv(*m_unif_diffuse,  1, m_diffuse.data());
    //glUniform3fv(*m_unif_lightPos, 1, m_lightPos.data());

    glUniform1f(*m_unif_ssaoRadius,  m_ssaoRadius);
    glUniform1f(*m_unif_ssaoPower,  m_ssaoPower);
    glUniform1i(*m_unif_ssaoKernelSize, m_ssaoKernelSize);
    glUniform3fv(*m_unif_kernel, m_ssaoKernelSize, (const GLfloat*) m_kernel);
    glUniform1i(*m_unif_FBOTextureNormal, 0);
    unbind();
}

void ShaderSSAO::setFBOTextureNormal(CGoGNGLuint texId)
{
    bind();
    glBindTexture(GL_TEXTURE_2D, *texId);
    glUniform1i(*m_unif_FBOTextureNormal, 0);
    unbind();
}

void ShaderSSAO::setParams(const float ssaoRadius, const float ssaoPower, const int ssaoKernelSize, const int ssaoNoiseSize)
{
    m_ssaoRadius = ssaoRadius;
    m_ssaoPower = ssaoPower;
    m_ssaoKernelSize = ssaoKernelSize;
    m_ssaoNoiseSize = ssaoNoiseSize;
    resizeSsaoKernel();
    sendParams();
}

void ShaderSSAO::restoreUniformsAttribs()
{
    getLocations();
    sendParams();
    bindVA_VBO("VertexPosition", m_vboPos);
    bindVA_VBO("VertexTexCoord", m_vboTexCoord);
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


