std::string PointSprite::fragmentShaderText =
"\n"
"uniform mat4 ProjectionMatrix;\n"
"uniform vec3 lightPos;\n"
"uniform vec3 ambiant;\n"
"uniform float size;\n"
"\n"
"#ifdef WITH_PLANE\n"
"uniform vec3 eyePos;\n"
"VARYING_FRAG vec3 shiftedEye;\n"
"#endif\n"
"\n"
"#ifdef WITH_COLOR_PER_VERTEX \n"
"VARYING_FRAG vec4 colorsprite;\n"
"#else\n"
"uniform vec4 colorsprite;\n"
"#endif\n"
"\n"
"VARYING_FRAG vec2 spriteCoord;\n"
"VARYING_FRAG vec3 sphereCenter;\n"
"FRAG_OUT_DEF ;\n"
"\n"
"void main(void)\n"
"{\n"
"#ifdef WITH_PLANE\n"
"	vec3 billboard_frag_pos = vec3(spriteCoord, 0.0) * size;\n"
"	vec3 ray_direction = normalize(billboard_frag_pos - shiftedEye);\n"
"	float av = dot(shiftedEye,ray_direction);\n"
"	float arg = av*av - dot(shiftedEye,shiftedEye) + size*size;\n"
"	if (arg< 0.0)\n"
"		discard;\n"
"	float t = -av - sqrt(arg);\n"
"	vec3 frag_position_eye = ray_direction * t + eyePos	;\n"
"#else\n"
"	vec3 billboard_frag_pos = sphereCenter + vec3(spriteCoord, 0.0) * size;\n"
"	vec3 ray_direction = normalize(billboard_frag_pos);\n"
"	float TD = -dot(ray_direction,sphereCenter);\n"
"	float c = dot(sphereCenter, sphereCenter) - size * size;\n"
"	float arg = TD * TD - c;\n"
"    \n"
"	if (arg < 0.0)\n"
"		discard;\n"
"\n"
"	float t = -c / (TD - sqrt(arg));\n"
"	vec3 frag_position_eye = ray_direction * t ;\n"
"#endif	\n"
"\n"
"	vec4 pos = ProjectionMatrix * vec4(frag_position_eye, 1.0);\n"
"	gl_FragDepth = (pos.z / pos.w + 1.0) / 2.0;\n"
"\n"
"	vec3 N = normalize(frag_position_eye - sphereCenter);\n"
"	vec3 L = normalize (lightPos - frag_position_eye);\n"
"	float lambertTerm = dot(N,L);\n"
"	\n"
"	vec4 result = colorsprite*lambertTerm;\n"
"	result.xyz += ambiant;\n"
"\n"
"	gl_FragColor = result;\n"
"}\n";
