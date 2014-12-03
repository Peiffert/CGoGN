std::string ShaderWallPaper::fragmentShaderText =
"\n"
"PRECISON;\n"
"VARYING_FRAG vec2 texCoord;\n"
"uniform sampler2D textureUnit;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"	gl_FragColor=texture2D(textureUnit,texCoord);\n"
"}\n";

