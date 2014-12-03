std::string ShaderExplodeSmoothVolumes::fragmentShaderText =
"\n"
"uniform vec4 ambient;\n"
"\n"
"VARYING_FRAG vec3 normalFS;\n"
"VARYING_FRAG vec3 lightFS;\n"
"VARYING_FRAG vec3 colorVert;\n"
"\n"
"\n"
"void main()\n"
"{\n"
"	float lambertTerm = abs(dot(normalize(normalFS),normalize(lightFS)));\n"
"	gl_FragColor = ambient + vec4(colorVert*lambertTerm, 1.0);\n"
"}\n";

