std::string ShaderColorPerVertex::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE vec3 VertexColor;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"VARYING_VERT vec3 color;\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"	gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);\n"
"	color = VertexColor;\n"
"}\n";

