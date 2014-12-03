std::string ShaderVectorPerVertex::geometryShaderText =
"\n"
"uniform float vectorScale;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"VARYING_IN vec3 VectorAttrib[];\n"
"void main()\n"
"{\n"
"	gl_Position = ModelViewProjectionMatrix * POSITION_IN(0);\n"
"	EmitVertex();\n"
"	gl_Position = ModelViewProjectionMatrix * (POSITION_IN(0) + vec4(VectorAttrib[0] * vectorScale, 0.0));\n"
"	EmitVertex();\n"
"	EndPrimitive();\n"
"}\n";

