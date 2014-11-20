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
/*
#ifndef __CGOGN_SHADER_SSAO__
#define __CGOGN_SHADER_SSAO__

#include "Utils/GLSLShader.h"
#include "Utils/textures.h"
#include "Utils/fbo.h"

namespace CGoGN
{

namespace Utils
{

class ShaderSSAO : public GLSLShader
{
protected:
    // shader sources
    //static std::string vertexShaderText;
    static std::string fragmentShaderText;

    // uniform locations
    CGoGNGLuint m_unif_ssaoRadius;
    CGoGNGLuint m_unif_ssaoPower;
    CGoGNGLuint m_unif_ssaoKernelSize;
    CGoGNGLuint m_unif_kernel;
    CGoGNGLuint m_unif_noiseTex;


    // uniform
    float m_ssaoRadius;
    float m_ssaoPower;
    CGoGNGLuint m_ssaoKernelSize;
    Geom::Vec3f *m_kernel;
    Geom::Vec3f *m_noiseData;

    // bruit
    CGoGNGLuint m_ssaoNoiseSize;

    //FBO *m_fboSsaoBlur; // fbo to write to in blur step, bind texGBufferGeometric_

    GLuint m_texSsaoNoise;

    void getLocations();

public:
    ShaderSSAO();

    void setParams();

    void setParams(const float m_ssaoRadius, const float m_ssaoPower, const CGoGNGLuint m_ssaoKernelSize);

    void generateSsaoTexNoise();

    void resizeSsaoKernel();

    void resizeSsaoNoise();
};

} // namespace Utils

} // namespace CGoGN

#endif
*/
