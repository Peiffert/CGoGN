std::string ShaderPhongTexture::fragmentShaderText =
"\n"
"PRECISON;\n"
"VARYING_FRAG vec3 EyeVector, Normal, LightDir;\n"
"VARYING_FRAG vec2 texCoord;\n"
"\n"
"uniform vec4 materialDiffuse;\n"
"uniform vec4 materialSpecular;\n"
"uniform float ambientCoef;\n"
"uniform float shininess;\n"
"uniform sampler2D textureUnit;\n"
"\n"
"FRAG_OUT_DEF;\n"
"\n"
"void main()\n"
"{\n"
"	vec3 N = normalize (Normal);\n"
"	vec3 L = normalize (LightDir);\n"
"	float lambertTerm = dot(N,L);\n"
"\n"
"	vec4 finalColor = ambientCoef * texture2D(textureUnit,texCoord);\n"
"	\n"
"	#ifdef DOUBLE_SIDED\n"
"	if (lambertTerm < 0.0)\n"
"	{\n"
"		N = -1.0*N;\n"
"		lambertTerm = -1.0*lambertTerm;\n"
"	#else\n"
"	if (lambertTerm > 0.0)\n"
"	{\n"
"	#endif\n"
"		vec3 E = normalize(EyeVector);\n"
"		vec3 R = reflect(-L, N);\n"
"		float specular = pow( max(dot(R, E), 0.0), shininess );\n"
"		vec3 diffuse = (1.0 - ambientCoef) * texture2D(textureUnit,texCoord).rgb;\n"
"		finalColor += vec4(diffuse*lambertTerm,0.0) + materialSpecular*specular;\n"
"	}\n"
"	gl_FragColor=finalColor;\n"
"}\n";
