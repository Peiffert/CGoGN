std::string ShaderSimpleNormal::fragmentShaderText =
"\n"
"PRECISON;\n"
"VARYING_VERT vec3 Position;\n"
"FRAG_OUT_DEF;\n"
"\n"
"void main()\n"
"{\n"
"	vec3 DX = dFdx(Position);\n"
"	vec3 DY = dFdy(Position);\n"
"	vec3 N=normalize(cross(DX,DY));\n"
"        gl_FragColor=vec4(N,Position[2]);\n"
"}\n";

