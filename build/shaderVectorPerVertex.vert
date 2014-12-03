std::string ShaderVectorPerVertex::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE vec3 VertexVector;\n"
"VARYING_VERT vec3 VectorAttrib;\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"	VectorAttrib = VertexVector;\n"
"	gl_Position = vec4(VertexPosition, 1.0);\n"
"}\n";

