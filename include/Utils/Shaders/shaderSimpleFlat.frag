//ShaderSimpleFlat::fragmentShaderText

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
//layout(location = 0) out vec3 gl_FragColor;

void main()
{
	vec3 DX = dFdx(Position);
	vec3 DY = dFdy(Position);
	vec3 N=normalize(cross(DX,DY));

	vec3 L = normalize (LightDir);

	vec4 finalColor = materialAmbient;

#ifdef DOUBLE_SIDED
	float lambertTerm;
	vec4 diffuseColor = materialDiffuse;
	if (!gl_FrontFacing)
	{
		N *= -1.0;
		lambertTerm = clamp(dot(N,L),0.0,1.0);
	}
	else
		lambertTerm = clamp(dot(N,L),0.0,1.0);
#ifndef WITH_COLOR
	finalColor += materialDiffuse * lambertTerm;
#else
	finalColor += vec4((Color*lambertTerm),0.0) ;
#endif
#else
	float lambertTerm = clamp(dot(N,L),0.0,1.0);
	if (gl_FrontFacing)
	{
#ifndef WITH_COLOR
		finalColor += materialDiffuse * lambertTerm;
#else
		finalColor += vec4((Color*lambertTerm),0.0) ;
#endif
	}
#endif
        //gl_FragColor=finalColor;
        gl_FragColor = vec4((N[0]+1.0)/2.0,(N[1]+1.0)/2.0,(N[2]+1.0)/2.0,0.0);
}
