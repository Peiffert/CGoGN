std::string ShaderFlatColor::fragmentShaderText =
"VARYING_FRAG vec4 ColorFS;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"	gl_FragColor = ColorFS;\n"
"}\n";

