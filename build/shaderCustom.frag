std::string ShaderCustom::fragmentShaderText =
"VARYING_FRAG vec4 ColorFS;\n"
"VARYING_FRAG vec3 N;\n"
"void main()\n"
"{\n"
"	gl_FragData[0] = ColorFS;\n"
"	gl_FragData[1] = vec4( 0.5*normalize(N)+vec3(0.5), 1.0 );\n"
"}\n";

