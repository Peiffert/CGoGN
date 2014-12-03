std::string ShaderTextureDepth::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE vec2 VertexTexCoord;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"VARYING_VERT vec2 texCoord;\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"	gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);\n"
"        texCoord = VertexTexCoord;\n"
"}\n";

