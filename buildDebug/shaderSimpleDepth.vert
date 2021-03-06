std::string ShaderSimpleDepth::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition, VertexNormal;\n"
"#ifdef WITH_COLOR\n"
"ATTRIBUTE vec3 VertexColor;\n"
"#endif\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"uniform mat4 ModelViewMatrix;\n"
"uniform vec3 lightPosition;\n"
"VARYING_VERT vec3 LightDir;\n"
"VARYING_VERT vec3 Position;\n"
"\n"
"#ifdef WITH_COLOR\n"
"VARYING_VERT vec3 Color;\n"
"#endif\n"
"\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"	Position = vec3 (ModelViewMatrix * vec4 (VertexPosition, 1.0));\n"
"	LightDir = lightPosition - Position;\n"
"	#ifdef WITH_COLOR\n"
"		Color = VertexColor;\n"
"	#endif\n"
"	gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);\n"
"}\n";

