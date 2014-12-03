std::string ShaderVectorPerVertex::fragmentShaderText =
"\n"
"PRECISON;\n"
"uniform vec4 vectorColor;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"	gl_FragColor = vectorColor;\n"
"}\n";

