std::string ShaderTextureMask::fragmentShaderText =
"\n"
"PRECISON;\n"
"VARYING_FRAG vec2 texCoord;\n"
"uniform sampler2D textureUnit;\n"
"uniform sampler2D textureUnitMask;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"	float m = texture2D(textureUnitMask,texCoord).r;\n"
"	if (m < 0.5)\n"
"		discard;\n"
"	gl_FragColor=texture2D(textureUnit,texCoord)*m;\n"
"}\n";

