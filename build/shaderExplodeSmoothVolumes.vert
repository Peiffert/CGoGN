std::string ShaderExplodeSmoothVolumes::vertexShaderText =
"ATTRIBUTE vec3 VertexPosition;\n"
"ATTRIBUTE vec3 VertexNormal;\n"
"ATTRIBUTE vec3 VertexColor;\n"
"\n"
"VARYING_VERT vec3 normalVertex;\n"
"VARYING_VERT vec3 colorVertex;\n"
"\n"
"void main()\n"
"{\n"
"	colorVertex = VertexColor;\n"
"	normalVertex = VertexNormal;\n"
"	gl_Position = vec4(VertexPosition, 1.0);\n"
"}\n";

