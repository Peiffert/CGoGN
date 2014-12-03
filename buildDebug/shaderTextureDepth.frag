std::string ShaderTextureDepth::fragmentShaderText =
"\n"
"PRECISON;\n"
"VARYING_FRAG vec2 texCoord;\n"
"uniform sampler2D textureUnit;\n"
"uniform sampler2D textureDepthUnit;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"    gl_FragDepth = texture2D(textureDepthUnit,texCoord).r;\n"
"    gl_FragColor = texture2D(textureUnit,texCoord);\n"
"    //gl_FragData[0] = texture2D(textureUnit,texCoord);\n"
"    //gl_FragData[1] = texture2D(textureDepthUnit,texCoord).r;\n"
"}\n";

