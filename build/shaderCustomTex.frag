std::string ShaderCustomTex::fragmentShaderText =
"\n"
"PRECISON;\n"
"uniform sampler2D textureUnit;\n"
"in vec3 N;\n"
"in vec2 fragTexCoord;\n"
"uniform vec4 ambient;\n"
"FRAG_OUT_DEF;\n"
"void main()\n"
"{\n"
"	gl_FragData[0] = ambient*texture2D(textureUnit,fragTexCoord);\n"
"	gl_FragData[1] = vec4( 0.5*normalize(N)+vec3(0.5), 1.0 );\n"
"}\n";

