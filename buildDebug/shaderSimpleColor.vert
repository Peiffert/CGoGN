std::string ShaderSimpleColor::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition, VertexNormal;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"\n"
"void main ()\n"
"{\n"
"	gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);\n"
"}\n";

