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

#include "glm/glm.hpp"
#include "glm/gtc/matrix_projection.hpp"

namespace CGoGN
{

namespace Utils
{

#include "shaderSSAO.vert"
#include "shaderSSAO.frag"


ShaderSSAO::ShaderSSAO(bool doubleSided)
{

    sm_isInitialized = false;

    m_nameVS = "ShaderSSAO_vs";
    m_nameFS = "ShaderSSAO_fs";

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
    //sendParams();

}

void ShaderSSAO::getLocations()
{
    bind();
    *m_unif_ssaoRadius = glGetUniformLocation(this->program_handler(), "uRadius");
    *m_unif_ssaoPower = glGetUniformLocation(this->program_handler(), "uPower");
    *m_unif_ssaoKernelSize = glGetUniformLocation(this->program_handler(), "uKernelSize");
    *m_unif_kernel = glGetUniformLocation(this->program_handler(), "uKernelOffsets");
    //*m_unif_FBOTextureNormal = glGetUniformLocation(this->program_handler(), "FBOTextureNormal");
    unbind();
}

void ShaderSSAO::sendParams()
{
    bind();
    glUniform1f(*m_unif_ssaoRadius,  m_ssaoRadius);
    glUniform1f(*m_unif_ssaoPower,  m_ssaoPower);
    glUniform1i(*m_unif_ssaoKernelSize, m_ssaoKernelSize);
    glUniform3fv(*m_unif_kernel, m_ssaoKernelSize, (const GLfloat*) m_kernel);
    glUniform1i(*m_unif_FBOTextureNormal, 0);
    unbind();
}

void ShaderSSAO::setFBOTextureNormal(CGoGNGLuint texId)
{
    texNormalId = texId;
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


void ShaderSSAO::drawSSAO()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Check if TextureSticker's elements have been initialized before
    if (!sm_isInitialized)
    {
        sm_quadPositionsVbo = new Utils::VBO();
        sm_quadTexCoordsVbo = new Utils::VBO();
        sm_quadPositionsVbo->setDataSize(3);
        sm_quadTexCoordsVbo->setDataSize(2);
        sm_quadPositionsVbo->allocate(4);
        sm_quadTexCoordsVbo->allocate(4);

        GLfloat positions[] = {
            -1.0f, -1.0f, 0.0f,
            +1.0f, -1.0f, 0.0f,
            +1.0f, +1.0f, 0.0f,
            -1.0f, +1.0f, 0.0f
            };
        GLfloat texCoords[] = {
            0.0f, 0.0f,
            1.0f, 0.0f,
            1.0f, 1.0f,
            0.0f, 1.0f
            };

        GLfloat* positionsPtr = (GLfloat*) sm_quadPositionsVbo->lockPtr();
        memcpy(positionsPtr, positions, 3 * 4 * sizeof(GLfloat));
        sm_quadPositionsVbo->releasePtr();
        GLfloat* texCoordsPtr = (GLfloat*) sm_quadTexCoordsVbo->lockPtr();
        memcpy(texCoordsPtr, texCoords, 2 * 4 * sizeof(GLfloat));
        sm_quadTexCoordsVbo->releasePtr();

        // Initialize simple texture mapping shader
        m_unif_FBOTextureNormal = glGetUniformLocation(this->program_handler(), "FBOTextureNormal");

        bindVA_VBO("VertexPosition", sm_quadPositionsVbo);

        bindVA_VBO("VertexTexCoord", sm_quadTexCoordsVbo);

        sm_isInitialized = true;
    }

    // Check if depth test is enabled
    GLboolean wasDepthTestEnabled = glIsEnabled(GL_DEPTH_TEST);

    // Disable depth test if it was enabled
    if (wasDepthTestEnabled == GL_TRUE)
        glDisable(GL_DEPTH_TEST);

    // Bind texture mapping shader
    bind();

    // Set texture uniform
    glUniform1i(*m_unif_FBOTextureNormal, 0);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, *m_unif_FBOTextureNormal);

    // Set matrices uniforms
    glm::mat4 projMatrix = glm::ortho(-1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f);
    glm::mat4 viewMatrix(1.0f);
    updateMatrices(projMatrix, viewMatrix);


    // Draw quad
    enableVertexAttribs();
    glDrawArrays(GL_QUADS, 0, 4);
    disableVertexAttribs();

    // Unbind texture mapping shader
    unbind();

    // Re-enable depth test if it was enabled before
    if (wasDepthTestEnabled == GL_TRUE)
        glEnable(GL_DEPTH_TEST);
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


