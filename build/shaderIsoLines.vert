std::string ShaderIsoLines::vertexShaderText =
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE float VertexData;\n"
"VARYING_VERT float attribData;\n"
"void main()\n"
"{\n"
"	gl_Position = vec4(VertexPosition, 1.0);\n"
"	attribData = VertexData;	\n"
"}\n";

