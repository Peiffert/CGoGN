std::string Strings3D::fragmentShaderText1 =
"\n"
"VARYING_FRAG vec2 tex_coord;\n"
"uniform sampler2D FontTexture;\n"
"uniform vec4 color;\n"
"FRAG_OUT_DEF;\n"
"void main (void)\n"
"{\n"
"	float lum = texture2D(FontTexture, tex_coord).s;;\n"
"// no } because it is added in the shader class code (with other things)\n";

