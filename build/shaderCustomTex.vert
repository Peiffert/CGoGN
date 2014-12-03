std::string ShaderCustomTex::vertexShaderText =
"\n"
"ATTRIBUTE vec3 VertexPosition, VertexNormal;\n"
"ATTRIBUTE vec2 VertexTexCoord;\n"
"uniform mat4 TransformationMatrix;\n"
"uniform mat4 ModelViewProjectionMatrix;\n"
"VARYING_VERT vec2 texCoord;\n"
"VARYING_VERT vec3 Normal;\n"
"INVARIANT_POS;\n"
"void main ()\n"
"{\n"
"	Normal = vec3 (ModelViewProjectionMatrix * TransformationMatrix * vec4 (VertexNormal , 1.0));\n"
"	gl_Position = ModelViewProjectionMatrix * TransformationMatrix * vec4 (VertexPosition, 1.0);\n"
"	texCoord = VertexTexCoord;\n"
"}\n";

