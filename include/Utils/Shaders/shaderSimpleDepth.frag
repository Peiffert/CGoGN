//ShaderSimpleDepth::fragmentShaderText

PRECISON;
VARYING_FRAG vec3 LightDir;
VARYING_VERT vec3 Position;
#ifdef WITH_COLOR
VARYING_FRAG vec3 Color;
#endif
uniform vec4 materialDiffuse;
uniform vec4 materialSpecular;
uniform vec4 materialAmbient;
uniform float shininess;
FRAG_OUT_DEF;

void main()
{
    gl_FragColor = gl_FragCoord.z / gl_FragCoord.w;
}
