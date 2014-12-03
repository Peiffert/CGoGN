std::string PointSprite::vertexShaderText  =
"\n"
"ATTRIBUTE vec3 VertexPosition;\n"
"#ifdef WITH_COLOR_PER_VERTEX \n"
"	ATTRIBUTE vec4 VertexColor;\n"
"	VARYING_VERT vec4 color;\n"
"#endif\n"
"\n"
"void main ()\n"
"{\n"
"	gl_Position = vec4(VertexPosition, 1.0);\n"
"#ifdef WITH_COLOR_PER_VERTEX \n"
"	color = VertexColor;\n"
"#endif\n"
"}\n";

