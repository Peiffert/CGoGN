std::string ShaderFlat::fragmentShaderText =
"uniform vec4 diffuse;\n"
"uniform vec4 diffuseBack;\n"
"uniform vec4 ambient;\n"
"VARYING_FRAG float lambertTerm;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"	if (gl_FrontFacing)\n"
"		gl_FragColor = ambient + lambertTerm*diffuse;\n"
"	else\n"
"		gl_FragColor = ambient + lambertTerm*diffuseBack;\n"
"}\n";

