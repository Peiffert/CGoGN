std::string ShaderSimpleColor::fragmentShaderText =
"\n"
"PRECISON;\n"
"uniform vec4 color;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"#ifdef BLACK_TRANSPARENCY\n"
"	if (dot(color,color) == 0.0)\n"
"		discard;\n"
"#endif\n"
"	gl_FragColor=color;\n"
"}\n";

