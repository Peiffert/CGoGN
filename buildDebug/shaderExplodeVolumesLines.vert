std::string ShaderExplodeVolumesLines::vertexShaderText =
"ATTRIBUTE vec3 VertexPosition;\n"
"void main()\n"
"{\n"
"	gl_Position = vec4(VertexPosition, 1.0);\n"
"}\n";

