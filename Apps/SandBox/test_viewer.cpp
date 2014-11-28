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
* Web site: http://cgogn.unistra.fr/                                           *
* Contact information: cgogn@unistra.fr                                        *
*                                                                              *
*******************************************************************************/

#include "test_viewer.h"
#include "Utils/chrono.h"

Viewer::Viewer() :
	m_renderStyle(FLAT),
	m_drawVertices(false),
	m_drawEdges(false),
	m_drawFaces(true),
	m_drawNormals(false),
	m_drawTopo(false),
	m_drawBoundaryTopo(true),
	m_render(NULL),
	m_phongShader(NULL),
	m_flatShader(NULL),
    m_depthShader(NULL),
    m_normalShader(NULL),
    m_SSAOShader(NULL),
	m_vectorShader(NULL),
	m_simpleColorShader(NULL),
	m_pointSprite(NULL)
{
	normalScaleFactor = 1.0f ;
	vertexScaleFactor = 0.1f ;
	faceShrinkage = 1.0f ;

	colClear = Geom::Vec4f(0.2f, 0.2f, 0.2f, 0.1f) ;
	colDif = Geom::Vec4f(0.8f, 0.9f, 0.7f, 1.0f) ;
	colSpec = Geom::Vec4f(0.9f, 0.9f, 0.9f, 1.0f) ;
	colNormal = Geom::Vec4f(1.0f, 0.0f, 0.0f, 1.0f) ;
	shininess = 80.0f ;
}
/* Initiation de l'interface Qt */
void Viewer::initGUI()
{
	setDock(&dock) ;

	dock.check_drawVertices->setChecked(false) ;
	dock.check_drawEdges->setChecked(false) ;
	dock.check_drawFaces->setChecked(true) ;
	dock.check_drawNormals->setChecked(false) ;

	dock.slider_verticesSize->setVisible(false) ;
	dock.slider_normalsSize->setVisible(false) ;

	dock.slider_verticesSize->setSliderPosition(50) ;
	dock.slider_normalsSize->setSliderPosition(50) ;

	setCallBack( dock.check_drawVertices, SIGNAL(toggled(bool)), SLOT(slot_drawVertices(bool)) ) ;
	setCallBack( dock.slider_verticesSize, SIGNAL(valueChanged(int)), SLOT(slot_verticesSize(int)) ) ;
	setCallBack( dock.check_drawEdges, SIGNAL(toggled(bool)), SLOT(slot_drawEdges(bool)) ) ;
	setCallBack( dock.check_drawFaces, SIGNAL(toggled(bool)), SLOT(slot_drawFaces(bool)) ) ;
	setCallBack( dock.combo_faceLighting, SIGNAL(currentIndexChanged(int)), SLOT(slot_faceLighting(int)) ) ;
	setCallBack( dock.check_drawTopo, SIGNAL(toggled(bool)), SLOT(slot_drawTopo(bool)) ) ;
	setCallBack( dock.check_drawNormals, SIGNAL(toggled(bool)), SLOT(slot_drawNormals(bool)) ) ;
	setCallBack( dock.slider_normalsSize, SIGNAL(valueChanged(int)), SLOT(slot_normalsSize(int)) ) ;
}


void Viewer::cb_initGL()
{
    Utils::GLSLShader::setCurrentOGLVersion(2) ;
	CGoGNout << "GL VERSION = "<< glGetString(GL_VERSION)<< CGoGNendl;
	Utils::GLSLShader::areShadersSupported();

	m_render = new Algo::Render::GL2::MapRender() ;
	m_topoRender = new Algo::Render::GL2::TopoRender() ;

	m_topoRender->setInitialDartsColor(0.25f, 0.25f, 0.25f) ;

    m_positionVBO = new Utils::VBO() ;
	m_normalVBO = new Utils::VBO() ;


    /*m_FBOTex = new Utils::Texture<2,Geom::Vec3uc>(GL_RGBA8);
    m_FBOTex->create(Geom::Vec2ui(512,512));
    m_FBOTex->setFiltering(GL_LINEAR);
    m_FBOTex->setWrapping(GL_CLAMP_TO_EDGE);
    m_FBOTex->update();*/

    m_FBO = new Utils::FBO(1024,1024) ;
    m_FBOColor = m_FBO->createAttachColorTexture(GL_RGB, GL_LINEAR);
    //m_FBODepth = m_FBO->createAttachDepthTexture(GL_LINEAR);
    //m_FBO->initScreenSpace();

    m_FBOZDepth = new Utils::FBO(1024,1024) ;
    m_FBODepthZDepth = m_FBOZDepth->createAttachDepthTexture(GL_LINEAR);
    //m_FBOColorZDepth = m_FBOZDepth->createAttachColorTexture(GL_RED, GL_LINEAR);

    m_FBONormal = new Utils::FBO(1024,1024) ;
    m_FBOColorNormal = m_FBONormal->createAttachColorTexture(GL_RGB32F, GL_LINEAR);

    m_FBOSSAO = new Utils::FBO(1024,1024) ;
    m_FBOColorSSAO = m_FBOSSAO->createAttachColorTexture(GL_RGB, GL_LINEAR);
    //m_FBOSSAOZDepth = m_FBOSSAO->attachColorTexture(m_FBOZDepth->getColorTexId(m_FBOColorZDepth));
    //m_FBOSSAONormal = m_FBOSSAO->attachColorTexture(m_FBONormal->getColorTexId(m_FBOColorNormal));

    // Phong Shader (lumière par interpolation pixels)
	m_phongShader = new Utils::ShaderPhong() ;
    //m_ph+ongShader->defines_Geom('0',);// FAUX Ceci permet dire où faire le rendu (layout)
	m_phongShader->setAttributePosition(m_positionVBO) ;
	m_phongShader->setAttributeNormal(m_normalVBO) ;
	m_phongShader->setAmbiant(colClear) ;
	m_phongShader->setDiffuse(colDif) ;
	m_phongShader->setSpecular(colSpec) ;
	m_phongShader->setShininess(shininess) ;

    // Flat Shader (lumière par face)
	m_flatShader = new Utils::ShaderSimpleFlat() ;
	m_flatShader->setAttributePosition(m_positionVBO) ;
	m_flatShader->setAmbiant(colClear) ;
	m_flatShader->setDiffuse(colDif) ;
//	m_flatShader->setDiffuseBack(Geom::Vec4f(0,0,0,0)) ;
//	m_flatShader->setExplode(faceShrinkage) ;

    // shader test de profondeur
    m_depthShader = new Utils::ShaderSimpleDepth() ;
    m_depthShader->setAttributePosition(m_positionVBO) ;
    m_depthShader->setAmbiant(colClear) ;
    m_depthShader->setDiffuse(colDif) ;

    // shader test de calcul de normal
    m_normalShader = new Utils::ShaderSimpleNormal() ;
    m_normalShader->setAttributePosition(m_positionVBO) ;
    m_normalShader->setAmbiant(colClear) ;
    m_normalShader->setDiffuse(colDif) ;


    // SSAO Shader
    m_SSAOShader = new Utils::ShaderSSAO() ;
    m_SSAOShader->setAttributePosition(m_positionVBO) ;
    m_SSAOShader->setAmbiant(colClear) ;
    m_SSAOShader->setDiffuse(colDif) ;
    m_SSAOShader->setFBOTextureZDepth(m_FBO->getColorTexId(m_FBOColorZDepth)) ;
    m_SSAOShader->setFBOTextureNormal(m_FBO->getColorTexId(m_FBOColorNormal)) ;
    // TODO : trouver comment lier un uniform au shader
    //m_SSAOShader->bindAttrib();
    //m_u_FBOTexture = glGetUniformLocation(program_postproc, "fbo_texture");

    // Shader position
	m_vectorShader = new Utils::ShaderVectorPerVertex() ;
	m_vectorShader->setAttributePosition(m_positionVBO) ;
	m_vectorShader->setAttributeVector(m_normalVBO) ;
	m_vectorShader->setColor(colNormal) ;

    // Shader couleur
	m_simpleColorShader = new Utils::ShaderSimpleColor() ;
	m_simpleColorShader->setAttributePosition(m_positionVBO) ;
	Geom::Vec4f c(0.0f, 0.0f, 0.0f, 1.0f) ;
	m_simpleColorShader->setColor(c) ;

    // Dessin des points
	m_pointSprite = new Utils::PointSprite() ;
	m_pointSprite->setAttributePosition(m_positionVBO) ;
	m_pointSprite->setColor(Geom::Vec4f(0.0f, 0.0f, 1.0f, 1.0f)) ;

    // Affichage FBO
    m_shaderWP = new Utils::ShaderWallPaper();
    m_shaderWP->setTextureUnit(m_FBOColor);
    //m_shaderWP->setTexture(m_textureWP);


    std::cout << "COUCOU1"<< std::endl;
    registerShader(m_phongShader) ;
	registerShader(m_flatShader) ;
    registerShader(m_depthShader) ;
    registerShader(m_normalShader) ;
    registerShader(m_SSAOShader) ;
    registerShader(m_vectorShader) ;
    registerShader(m_simpleColorShader) ;
    registerShader(m_pointSprite) ;
    registerShader(m_shaderWP);

    glEnable(GL_TEXTURE_2D);
}

// Dessin 3D
void Viewer::cb_redraw()
{
    m_FBO->bind();
    glClear(GL_COLOR_BUFFER_BIT);
    if(m_drawVertices)
	{
		glDepthFunc(GL_LEQUAL);
		m_pointSprite->setSize(vertexScaleFactor) ;
		m_render->draw(m_pointSprite, Algo::Render::GL2::POINTS) ;
    }

	if(m_drawEdges)
	{
		glDepthFunc(GL_LEQUAL);
		glLineWidth(1.0f) ;
		m_render->draw(m_simpleColorShader, Algo::Render::GL2::LINES) ;
	}

	if(m_drawFaces)
	{
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL) ;
		glEnable(GL_LIGHTING) ;
		glEnable(GL_POLYGON_OFFSET_FILL) ;
		glPolygonOffset(1.0f, 1.0f) ;
		glDepthFunc(GL_LESS);
		switch(m_renderStyle)
		{
			case FLAT :
				m_render->draw(m_flatShader, Algo::Render::GL2::TRIANGLES) ;
				break ;
			case PHONG :
				m_render->draw(m_phongShader, Algo::Render::GL2::TRIANGLES) ;
				break ;
            case SSAO :
                m_render->draw(m_SSAOShader, Algo::Render::GL2::TRIANGLES) ;
            break ;
		}
		glDisable(GL_POLYGON_OFFSET_FILL) ;
	}

	if(m_drawTopo)
	{
		glDepthFunc(GL_LEQUAL);
		m_topoRender->drawTopo() ;
	}

	if(m_drawNormals)
	{
		float size = normalBaseSize * normalScaleFactor ;
		m_vectorShader->setScale(size) ;
		glLineWidth(1.0f) ;
		m_render->draw(m_vectorShader, Algo::Render::GL2::POINTS) ;
    }
    m_FBO->unbind();

    // Dessin de profondeur
    m_FBOZDepth->bind();
    m_render->draw(m_depthShader, Algo::Render::GL2::TRIANGLES) ;
    m_FBOZDepth->unbind();

    // Dessin de normals
    m_FBONormal->bind();
    m_render->draw(m_normalShader, Algo::Render::GL2::TRIANGLES) ;
    m_FBONormal->unbind();

    // Dessin de normals
    m_FBOSSAO->bind();
    glClear(GL_COLOR_BUFFER_BIT);
    /*m_SSAOShader->bind();
    // TODO : /!\ Pas forcément GL_TEXTURE_2D A vérifier
    glBindTexture(GL_TEXTURE_2D, m_FBO->getColorTexId(m_FBOColorZDepth));
    glUniform1i(m_u_FBOTexture, 0);
    glBindTexture(GL_TEXTURE_2D, m_FBO->getColorTexId(m_FBOColorNormal));
    glUniform1i(m_u_FBOTexture, 1);
    m_SSAOShader->unbind();
    */
    m_render->draw(m_SSAOShader, Algo::Render::GL2::TRIANGLES) ;
    m_FBOSSAO->unbind();

    //glDisable(GL_DEPTH_TEST);
    //m_shaderWP->draw(m_FBOSSAO->getColorTexId(m_FBOColorSSAO)); //MARCHE !
    //glEnable(GL_DEPTH_TEST);
    //m_shaderWP->draw(0);
    m_FBO->draw(m_FBOColor); //MARCHE !

    std::cout << "BIAIAIAE"<< std::endl;

    //m_FBO->drawWithDepth(m_FBOColor); //MARCHE !
    //m_FBO->drawWithDepth(m_FBOColor,m_FBO->getDepthTexId());
}
//

// Ouverture fichier
void Viewer::cb_Open()
{
	std::string filters("all (*.*);; trian (*.trian);; ctm (*.ctm);; off (*.off);; ply (*.ply)") ;
	std::string filename = selectFile("Open Mesh", "", filters) ;
	if (filename.empty())
		return ;

	importMesh(filename) ;
	updateGL() ;
}

// Sauvegarde fichier
void Viewer::cb_Save()
{
	std::string filters("all (*.*);; map (*.map);; off (*.off);; ply (*.ply)") ;
	std::string filename = selectFileSave("Save Mesh", "", filters) ;

	if (!filename.empty())
		exportMesh(filename) ;
}

/* Events :
 * c :
 * a :
 * b :
 * B :
 * e :
 * f :
 * A :
 * Z :
 */
void Viewer::cb_keyPress(int keycode)
{
	switch(keycode)
	{
		case 'c' :
			myMap.check();
			break;

		case 'a':
		{
			Utils::Chrono ch;
			ch.start();
			VertexAttribute<VEC3, MAP> pos2 = myMap.getAttribute<VEC3, VERTEX, MAP>("pos2") ;
			if(!pos2.isValid())
				pos2 = myMap.addAttribute<VEC3, VERTEX, MAP>("pos2") ;

			for (int i=0; i< 10; ++i)
			{
				TraversorV<MAP> trav(myMap);
				for (Dart d=trav.begin(), d_end = trav.end(); d!=d_end ; d = trav.next())
				{
					pos2[d] = VEC3(0,0,0);
					int nb=0;
					Traversor2VVaF<MAP> trf(myMap,d);
					for (Dart e = trf.begin(),e_end =trf.end() ; e != e_end; e = trf.next())
					{
						pos2[d] += position[e];
						nb++;
					}
					pos2[d]/=nb;
				}
				myMap.swapAttributes(position, pos2);
			}
			std::cout << "Traversor "<< ch.elapsed()<< " ms "<< std::endl;
			Algo::Surface::Geometry::computeNormalVertices<PFP>(myMap, position, normal) ;
			m_positionVBO->updateData(position) ;
			m_normalVBO->updateData(normal) ;
			updateGL();
		}
			break;

		case 'b':
		{
			Utils::Chrono ch;
			ch.start();

			VertexAttribute<VEC3,MAP> pos2 = myMap.getAttribute<VEC3, VERTEX, MAP>("pos2") ;
			if(!pos2.isValid())
				pos2 = myMap.addAttribute<VEC3, VERTEX, MAP>("pos2") ;

			for (int i=0; i< 6; ++i)
			{
				foreach_cell<VERTEX>(myMap, [&] (Vertex d)
				{
					pos2[d] = VEC3(0,0,0);
					int nb=0;
					foreach_adjacent2<FACE>(myMap,d,[&](Vertex e)
					{
						pos2[d] += position[e];
						nb++;
					});
					pos2[d]/=nb;
				});
				myMap.swapAttributes(position,pos2);
			}
			std::cout << "Lambda "<< ch.elapsed()<< " ms "<< std::endl;
			Algo::Surface::Geometry::computeNormalVertices<PFP>(myMap, position, normal) ;
			m_positionVBO->updateData(position) ;
			m_normalVBO->updateData(normal) ;
			updateGL();
		}
			break;
		case 'B':
		{
			Utils::Chrono ch;
			ch.start();

			VertexAttribute<VEC3,MAP> pos2 = myMap.getAttribute<VEC3, VERTEX, MAP>("pos2") ;
			if(!pos2.isValid())
				pos2 = myMap.addAttribute<VEC3, VERTEX, MAP>("pos2") ;

			//		foreach_cell_EvenOddd<VERTEX>(myMap, [&] (Vertex d)
			//		{
			//			pos2[d] = VEC3(0,0,0);
			//			int nb=0;
			//			foreach_adjacent2<FACE>(myMap,d,[&](Vertex e)
			//			{
			//				pos2[d] += position[e];
			//				nb++;
			//			});
			//			pos2[d]/=nb;
			//		},
			//		[&] (Vertex d)
			//		{
			//			position[d] = VEC3(0,0,0);
			//			int nb=0;
			//			foreach_adjacent2<FACE>(myMap,d,[&](Vertex e)
			//			{
			//				position[d] += pos2[e];
			//				nb++;
			//			});
			//			position[d]/=nb;
			//		},
			//		3);

			//		std::cout << "Even/Odd "<< ch.elapsed()<< " ms "<< std::endl;
			Algo::Surface::Geometry::computeNormalVertices<PFP>(myMap, position, normal) ;
			m_positionVBO->updateData(position) ;
			m_normalVBO->updateData(normal) ;
			updateGL();
		}
			break;

		case 'e':
		{
			Utils::Chrono ch;
			ch.start();
			VertexAttribute<VEC3,MAP> pos2 = myMap.getAttribute<VEC3, VERTEX, MAP>("pos2") ;
			if(!pos2.isValid())
				pos2 = myMap.addAttribute<VEC3, VERTEX, MAP>("pos2") ;

			for (int i=0; i< 10; ++i)
			{
				TraversorV<MAP> trav(myMap);
				for (Dart d=trav.begin(), d_end = trav.end(); d!=d_end ; d = trav.next())
				{
					pos2[d] = VEC3(0,0,0);
					int nb=0;
					Traversor2VE<MAP> trf(myMap,d);
					for (Dart e = trf.begin(),e_end =trf.end() ; e != e_end; e = trf.next())
					{
						pos2[d] += position[myMap.phi1(e)];
						nb++;
					}
					pos2[d]/=nb;
				}
				myMap.swapAttributes(position,pos2);
			}
			std::cout << "Traversor "<< ch.elapsed()<< " ms "<< std::endl;
			Algo::Surface::Geometry::computeNormalVertices<PFP>(myMap, position, normal) ;
			m_positionVBO->updateData(position) ;
			m_normalVBO->updateData(normal) ;
			updateGL();
		}
			break;

		case 'f':
		{
			Utils::Chrono ch;
			ch.start();

			VertexAttribute<VEC3,MAP> pos2 = myMap.getAttribute<VEC3, VERTEX, MAP>("pos2") ;
			if(!pos2.isValid())
				pos2 = myMap.addAttribute<VEC3, VERTEX, MAP>("pos2") ;

			for (int i=0; i< 10; ++i)
			{
				foreach_cell<VERTEX>(myMap, [&] (Vertex d)
				{
					pos2[d] = VEC3(0,0,0);
					int nb=0;
					foreach_incident2<EDGE>(myMap,d,[&](Edge e)
					{
						pos2[d] += position[myMap.phi1(e)];
						nb++;
					});
					pos2[d]/=nb;
				});
				myMap.swapAttributes(position,pos2);
			}
			std::cout << "Lambda "<< ch.elapsed()<< " ms "<< std::endl;
			Algo::Surface::Geometry::computeNormalVertices<PFP>(myMap, position, normal) ;
			m_positionVBO->updateData(position) ;
			m_normalVBO->updateData(normal) ;
			updateGL();
		}
			break;

		case'A':
		{
			myMap.disableQuickTraversal<VERTEX>() ;
#define NBLOOP 5
			Utils::Chrono ch;
			ch.start();
			{
				TraversorCell<MAP, VERTEX, FORCE_CELL_MARKING> trav(myMap,true);
				for(unsigned int i=0; i<NBLOOP; ++i)
				{
					for (Cell<VERTEX> v = trav.begin(), e = trav.end(); v.dart != e.dart; v = trav.next())
					{
						normal[v][0] = 0.0f;
					}
				}
				std::cout << "FORCE_CELL_MARKING "<< ch.elapsed()<< " ms "<< std::endl;
			}

			ch.start();
			{
				TraversorCell<MAP, VERTEX> trav(myMap);
				for(unsigned int i=0; i<NBLOOP; ++i)
				{
					for (Cell<VERTEX> v = trav.begin(), e = trav.end(); v.dart != e.dart; v = trav.next())
					{
						normal[v][0] = 0.0f;
					}
				}
				std::cout << "auto "<< ch.elapsed()<< " ms "<< std::endl;
			}

			ch.start();
			{
				TraversorCell<MAP, VERTEX> trav(myMap,true);
				for(unsigned int i=0; i<NBLOOP; ++i)
				{
					for (Cell<VERTEX> v = trav.begin(), e = trav.end(); v.dart != e.dart; v = trav.next())
					{
						normal[v][0] = 0.0f;
					}
				}
				std::cout << "auto forcedart "<< ch.elapsed()<< " ms "<< std::endl;
			}

			ch.start();
			{
				TraversorCell<MAP, VERTEX, FORCE_DART_MARKING> trav(myMap,true);
				for(unsigned int i=0; i<NBLOOP; ++i)
				{
					for (Cell<VERTEX> v = trav.begin(), e = trav.end(); v.dart != e.dart; v = trav.next())
					{
						normal[v][0] = 0.0f;
					}
				}
				std::cout << "FORCE_DART_MARKING "<< ch.elapsed()<< " ms "<< std::endl;
			}
			myMap.enableQuickTraversal<MAP, VERTEX>() ;
			ch.start();
			{
				TraversorCell<MAP, VERTEX> trav(myMap);
				for(unsigned int i=0; i<NBLOOP; ++i)
				{
					for (Cell<VERTEX> v = trav.begin(), e = trav.end(); v.dart != e.dart; v = trav.next())
					{
						normal[v][0] = 0.0f;
					}
				}
				std::cout << "auto (quick) "<< ch.elapsed()<< " ms "<< std::endl;
			}

			ch.start();
			{
				TraversorCell<MAP, VERTEX, FORCE_QUICK_TRAVERSAL> trav(myMap);
				for(unsigned int i=0; i<NBLOOP; ++i)
				{
					for (Cell<VERTEX> v = trav.begin(), e = trav.end(); v.dart != e.dart; v = trav.next())
					{
						normal[v][0] = 0.0f;
					}
				}
				std::cout << "FORCE_QUICK_TRAVERSAL "<< ch.elapsed()<< " ms "<< std::endl;
			}

		}
			break;

		case'Z':
		{

			Utils::Chrono ch;
			ch.start();
			CGoGN::Parallel::NumberOfThreads = 1;
			for (unsigned int i=0; i<4; ++i)
				Algo::Surface::Geometry::Parallel::computeNormalVertices<PFP>(myMap, position, normal) ;
			std::cout << "Algo::Surface::Geometry::Parallel::computeNormalVertices1 "<< ch.elapsed()<< " ms "<< std::endl;

			ch.start();
			CGoGN::Parallel::NumberOfThreads = 2;
			for (unsigned int i=0; i<4; ++i)
				Algo::Surface::Geometry::Parallel::computeNormalVertices<PFP>(myMap, position, normal) ;
			std::cout << "Algo::Surface::Geometry::Parallel::computeNormalVertices2 "<< ch.elapsed()<< " ms "<< std::endl;

			ch.start();
			CGoGN::Parallel::NumberOfThreads = 3;
			for (unsigned int i=0; i<4; ++i)
				Algo::Surface::Geometry::Parallel::computeNormalVertices<PFP>(myMap, position, normal) ;
			std::cout << "Algo::Surface::Geometry::Parallel::computeNormalVertices3 "<< ch.elapsed()<< " ms "<< std::endl;

			ch.start();
			CGoGN::Parallel::NumberOfThreads = 4;
			for (unsigned int i=0; i<4; ++i)
				Algo::Surface::Geometry::Parallel::computeNormalVertices<PFP>(myMap, position, normal) ;
			std::cout << "Algo::Surface::Geometry::Parallel::computeNormalVertices4 "<< ch.elapsed()<< " ms "<< std::endl;

			ch.start();
			CGoGN::Parallel::NumberOfThreads = 8;
			for (unsigned int i=0; i<4; ++i)
				Algo::Surface::Geometry::Parallel::computeNormalVertices<PFP>(myMap, position, normal) ;
			std::cout << "Algo::Surface::Geometry::Parallel::computeNormalVertices8 "<< ch.elapsed()<< " ms "<< std::endl;


			//		ch.start();
			//		Parallel::foreach_cell_EO<VERTEX>(myMap,[&](Vertex v, unsigned int thr)
			//		{
			//			normal[v] = Algo::Surface::Geometry::vertexNormal<PFP>(myMap,v,position);
			//		},
			//		[&](Vertex v, unsigned int th)
			//		{
			//			normal[v] = Algo::Surface::Geometry::vertexNormal<PFP>(myMap,v,position);
			//		},2,4,false,FORCE_CELL_MARKING);

			//		std::cout << "Parallel::foreach_cell_EO "<< ch.elapsed()<< " ms "<< std::endl;


		}
			break;


		default:
			break;
	}
}

/* Importer maillage */
void Viewer::importMesh(std::string& filename)
{
	myMap.clear(true) ;

	size_t pos = filename.rfind(".");    // position of "." in filename
	std::string extension = filename.substr(pos);

	if (extension == std::string(".map"))
	{
		myMap.loadMapBin(filename);
		position = myMap.getAttribute<VEC3, VERTEX, MAP>("position") ;
	}
	else
	{
		std::vector<std::string> attrNames ;
		if(!Algo::Surface::Import::importMesh<PFP>(myMap, filename.c_str(), attrNames))
		{
			CGoGNerr << "could not import " << filename << CGoGNendl ;
			return;
		}
		position = myMap.getAttribute<PFP::VEC3, VERTEX, MAP>(attrNames[0]) ;
	}

	//	myMap.enableQuickTraversal<VERTEX>() ;

	m_render->initPrimitives<PFP>(myMap, Algo::Render::GL2::POINTS) ;
	m_render->initPrimitives<PFP>(myMap, Algo::Render::GL2::LINES) ;
	m_render->initPrimitives<PFP>(myMap, Algo::Render::GL2::TRIANGLES) ;

	m_topoRender->updateData<PFP>(myMap, position, 0.85f, 0.85f, m_drawBoundaryTopo) ;

	bb = Algo::Geometry::computeBoundingBox<PFP>(myMap, position) ;
	normalBaseSize = bb.diagSize() / 100.0f ;
	//	vertexBaseSize = normalBaseSize / 5.0f ;

	normal = myMap.getAttribute<VEC3, VERTEX, MAP>("normal") ;
	if(!normal.isValid())
		normal = myMap.addAttribute<VEC3, VERTEX, MAP>("normal") ;

	Utils::Chrono c;
	c.start();
	Algo::Surface::Geometry::computeNormalVertices<PFP>(myMap, position, normal) ;
	std::cout << "compute normals -> " << c.elapsed() << std::endl;

	m_positionVBO->updateData(position) ;
	m_normalVBO->updateData(normal) ;

	setParamObject(bb.maxSize(), bb.center().data()) ;
	updateGLMatrices() ;

	std::cout << "#vertices -> " << Algo::Topo::getNbOrbits<VERTEX>(myMap) << std::endl;
}

/* Exporter maillage */
void Viewer::exportMesh(std::string& filename, bool askExportMode)
{
	size_t pos = filename.rfind(".") ;    // position of "." in filename
	std::string extension = filename.substr(pos) ;

	if (extension == std::string(".off"))
		Algo::Surface::Export::exportOFF<PFP>(myMap, position, filename.c_str()) ;
	else if (extension.compare(0, 4, std::string(".ply")) == 0)
	{
		int ascii = 0 ;
		if (askExportMode)
			Utils::QT::inputValues(Utils::QT::VarCombo("binary mode;ascii mode",ascii,"Save in")) ;

		std::vector<VertexAttribute<VEC3, MAP>*> attributes ;
		attributes.push_back(&position) ;
		Algo::Surface::Export::exportPLYnew<PFP>(myMap, attributes, filename.c_str(), !ascii) ;
	}
	else if (extension == std::string(".map"))
		myMap.saveMapBin(filename) ;
	else
		std::cerr << "Cannot save file " << filename << " : unknown or unhandled extension" << std::endl ;
}

void Viewer::slot_drawVertices(bool b)
{
	m_drawVertices = b ;
	updateGL() ;
}

void Viewer::slot_verticesSize(int i)
{
	vertexScaleFactor = i / 500.0f ;
	updateGL() ;
}

void Viewer::slot_drawEdges(bool b)
{
	m_drawEdges = b ;
	updateGL() ;
}

void Viewer::slot_drawFaces(bool b)
{
	m_drawFaces = b ;
	if (b)
	{
		Geom::Vec4f c(0.0f, 0.0f, 0.0f, 1.0f) ;
		m_simpleColorShader->setColor(c) ;
	}
	else
	{
		Geom::Vec4f c(0.9f, 0.9f, 0.1f, 1.0f) ;
		m_simpleColorShader->setColor(c) ;
	}

	updateGL() ;
}

void Viewer::slot_faceLighting(int i)
{
	m_renderStyle = i ;
	updateGL() ;
}

void Viewer::slot_drawTopo(bool b)
{
	m_drawTopo = b ;
	updateGL() ;
}

void Viewer::slot_drawNormals(bool b)
{
	m_drawNormals = b ;
	updateGL() ;
}

void Viewer::slot_normalsSize(int i)
{
	normalScaleFactor = i / 50.0f ;
	updateGL() ;
}

/**********************************************************************************************
 *                                      MAIN FUNCTION                                         *
 **********************************************************************************************/

int main(int argc, char **argv)
{
	QApplication app(argc, argv) ;

	Viewer sqt ;
	sqt.setGeometry(0, 0, 1000, 800) ;
	sqt.show() ;

	if(argc >= 2)
	{
		std::string filename(argv[1]) ;
		sqt.importMesh(filename) ;
		if(argc >= 3)
		{
			std::string filenameExp(argv[2]) ;
			std::cout << "Exporting " << filename << " as " << filenameExp << " ... "<< std::flush ;
			sqt.exportMesh(filenameExp, false) ;
			std::cout << "done!" << std::endl ;

			return (0) ;
		}
	}

	sqt.initGUI() ;

    return app.exec() ;
}
