std::string ShaderExplodeVolumesLines::geometryShaderText =
"uniform float explodeV;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"uniform mat4 NormalMatrix;\n"
"uniform mat4 ModelViewMatrix;\n"
"uniform vec4 plane;\n"
"uniform vec4 color;\n"
"\n"
"VARYING_OUT vec4 ColorFS;\n"
"void main(void)\n"
"{\n"
"	float d = dot(plane,POSITION_IN(0));\n"
"	\n"
"	if (d<=0.0)\n"
"	{\n"
"		ColorFS = color;\n"
"	\n"
"		for (int i=1; i<NBVERTS_IN; i++)\n"
"		{\n"
"			vec4 P = explodeV * POSITION_IN(i) + (1.0-explodeV)* POSITION_IN(0);\n"
"			gl_Position = ModelViewProjectionMatrix *  P;\n"
"			EmitVertex();\n"
"		}\n"
"		EndPrimitive();\n"
"	}	\n"
"}\n";
