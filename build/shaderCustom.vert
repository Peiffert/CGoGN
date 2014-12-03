std::string ShaderCustom::vertexShaderText =
"uniform mat4 TransformationMatrix;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"ATTRIBUTE vec3 VertexPosition;\n"
"void main()\n"
"{\n"
"	gl_Position = TransformationMatrix *vec4(VertexPosition, 1.0);\n"
"}\n";

