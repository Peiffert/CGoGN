std::string ShaderSimpleNormal::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition, VertexNormal;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"uniform mat4 ModelViewMatrix;\n"
"VARYING_VERT vec3 Position;\n"
"\n"
"#ifdef WITH_COLOR\n"
"VARYING_VERT vec3 Color;\n"
"#endif\n"
"\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"        Position = vec3 (ModelViewMatrix * vec4 (VertexPosition, 1.0));\n"
"	gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);\n"
"}\n";

