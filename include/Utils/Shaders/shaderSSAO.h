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

#ifndef __CGOGN_SHADER_SSSAO__
#define __CGOGN_SHADER_SSSAO__

#include "Utils/GLSLShader.h"
#include "Utils/clippingShader.h"
#include "Geometry/vector_gen.h"

#include <string>

namespace CGoGN
{

namespace Utils
{

class ShaderSSAO : public ClippingShader
{
protected:
    // flag color per vertex or not
    bool m_with_color;
    // flag color per vertex or not
    bool m_with_eyepos;

    // shader sources OGL3
    static std::string vertexShaderText;
    static std::string fragmentShaderText;

    // uniform locations
    CGoGNGLuint m_unif_ambiant;
    CGoGNGLuint m_unif_diffuse;
    CGoGNGLuint m_unif_lightPos;
    CGoGNGLuint m_unif_FBOTextureNormal;
    CGoGNGLuint m_unif_FBOTextureZDepth;
    /* Size of the half-sphere */
    CGoGNGLuint m_unif_ssaoRadius;
    /* Strengh of occlusion */
    CGoGNGLuint m_unif_ssaoPower;
    CGoGNGLuint m_unif_ssaoKernelSize;
    CGoGNGLuint m_unif_kernel;
    CGoGNGLuint m_unif_noiseTex;

    //values
    Geom::Vec4f m_ambiant;
    Geom::Vec4f m_diffuse;
    Geom::Vec3f m_lightPos;
    float m_ssaoRadius;
    float m_ssaoPower;
    int m_ssaoKernelSize;
    Geom::Vec3f *m_kernel;
    Geom::Vec3f *m_noiseData;

    GLuint m_texSsaoNoise;

    // Noise
    int m_ssaoNoiseSize;

    VBO* m_vboPos;
    VBO* m_vboColor;

    void getLocations();

    void sendParams();

    void restoreUniformsAttribs();

public:
    ShaderSSAO(bool doubleSided = false);

    // inviduals parameter setting functions
    void setAmbiant(const Geom::Vec4f& ambiant);

    void setDiffuse(const Geom::Vec4f& diffuse);

    void setLightPosition(const Geom::Vec3f& lp);

    void setFBOTextureZDepth(CGoGNGLuint texture_id);

    void setFBOTextureNormal(CGoGNGLuint texture_id);

    const Geom::Vec4f& getAmbiant() const { return m_ambiant; }

    const Geom::Vec4f& getDiffuse() const { return m_diffuse; }

    const Geom::Vec3f& getLightPosition() const { return m_lightPos; }

    /**
     * set all parameter in on call (one bind also)
     */
    void setParams(const Geom::Vec4f& ambiant, const Geom::Vec4f& diffuse, const Geom::Vec3f& lightPos);

    void setParams(const float m_ssaoRadius, const float m_ssaoPower, const int m_ssaoKernelSize, const int ssaoNoiseSize);

    // attributes
    unsigned int setAttributePosition(VBO* vbo);

    // optional attributes
    unsigned int setAttributeColor(VBO* vbo);
    void unsetAttributeColor();


    void generateSsaoTexNoise();

    void resizeSsaoKernel();

    void resizeSsaoNoise();
};

} // namespace Utils

} // namespace CGoGN

#endif


