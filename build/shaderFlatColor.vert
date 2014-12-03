std::string ShaderFlatColor::vertexShaderText =
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE vec3 VertexColor;\n"
"VARYING_VERT vec3 colorVertex;\n"
"void main()\n"
"{\n"
"	gl_Position = vec4(VertexPosition, 1.0);\n"
"	colorVertex = VertexColor;\n"
"}\n";

