std::string ShaderWallPaper::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE vec2 VertexTexCoord;\n"
"VARYING_VERT vec2 texCoord;\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"	gl_Position = vec4 (VertexPosition, 1.0);\n"
"	texCoord = VertexTexCoord;\n"
"}\n";

