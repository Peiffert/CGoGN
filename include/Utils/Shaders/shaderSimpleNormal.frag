//ShaderSimpleNormal::fragmentShaderText

PRECISON;
VARYING_VERT vec3 Position;
FRAG_OUT_DEF;

void main()
{
	vec3 DX = dFdx(Position);
	vec3 DY = dFdy(Position);
	vec3 N=normalize(cross(DX,DY));
        gl_FragColor=N;
}
