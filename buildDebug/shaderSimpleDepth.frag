std::string ShaderSimpleDepth::fragmentShaderText =
"\n"
"PRECISON;\n"
"VARYING_FRAG vec3 LightDir;\n"
"VARYING_VERT vec3 Position;\n"
"#ifdef WITH_COLOR\n"
"VARYING_FRAG vec3 Color;\n"
"#endif\n"
"uniform vec4 materialDiffuse;\n"
"uniform vec4 materialSpecular;\n"
"uniform vec4 materialAmbient;\n"
"uniform float shininess;\n"
"FRAG_OUT_DEF;\n"
"\n"
"void main()\n"
"{\n"
"    gl_FragColor = gl_FragCoord.z / gl_FragCoord.w;\n"
"}\n";

