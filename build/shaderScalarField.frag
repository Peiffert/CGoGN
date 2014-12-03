std::string ShaderScalarField::fragmentShaderText =
"\n"
"PRECISON;\n"
"uniform float minValue;\n"
"uniform float maxValue;\n"
"VARYING_FRAG vec3 color;\n"
"VARYING_FRAG float scalar;\n"
"FRAG_OUT_DEF;\n"
"\n"
"void main()\n"
"{\n"
"//	float s = scalar * 10.0;\n"
"//	if( s - floor(s) <= 0.05 )\n"
"//		gl_FragColor = vec4(0.0);\n"
"//	else\n"
"		gl_FragColor = vec4(color, 0.0);\n"
"}\n";

