std::string Strings3D::vertexShaderText =
"\n"
"ATTRIBUTE vec4 VertexPosition;\n"
"uniform mat4 ModelViewMatrix;\n"
"uniform mat4 ProjectionMatrix;\n"
"uniform vec3 strPos;\n"
"uniform float scale;\n"
"VARYING_VERT vec2 tex_coord;\n"
"INVARIANT_POS;\n"
"\n"
"#ifdef WITH_PLANE\n"
"uniform vec3 planeX;\n"
"uniform vec3 planeY;\n"
"#endif\n"
"\n"
"void main ()\n"
"{\n"
"#ifdef WITH_PLANE\n"
"	vec4 pos = ModelViewMatrix * vec4(strPos,1.0);\n"
"	pos += scale*VertexPosition[0]*vec4(planeX,0.0);\n"
"	pos += scale*VertexPosition[1]*vec4(planeY,0.0);\n"
"#else\n"
"	vec4 pos = ModelViewMatrix * vec4(strPos,1.0) + vec4(VertexPosition[0]*scale,VertexPosition[1]*scale,0.0,0.0);\n"
"#endif\n"
"\n"
"	tex_coord = vec2(VertexPosition[2],VertexPosition[3]);\n"
"	gl_Position = ProjectionMatrix * pos;\n"
"}\n";

