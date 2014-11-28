//ShaderSSAO::fragmentShaderText

PRECISON;
VARYING_FRAG vec3 LightDir;
VARYING_VERT vec3 Position;
VARYING_VERT vec2 TexCoord;
#ifdef WITH_COLOR
VARYING_FRAG vec3 Color;
#endif
uniform vec4 materialDiffuse;
uniform vec4 materialSpecular;
uniform vec4 materialAmbient;
uniform float shininess;
uniform sampler2D FBOTextureZDepth;
uniform sampler2D FBOTextureNormal;

const int MAX_KERNEL_SIZE = 128;
/******Taille du noyau unitaire (en nombre de points tests)******/
uniform int uKernelSize;
/******Points du noyau******/
uniform vec3 uKernelOffsets[MAX_KERNEL_SIZE];
/****** Rayon du noyau unitaire ******/
uniform float uRadius = 1.5;
/****** Puissance de l'occlusion ******/
uniform float uPower = 2.0;
FRAG_OUT_DEF;

void main()
{
    // Profondeur du fragment TextureZDepth
    float textureDepth = texture2D(FBOTextureZDepth, TexCoord);
    vec3 normal = texture2D(FBOTextureNormal, TexCoord);

    for (int i = 0; i < uKernelSize; ++i) {
        vec3 samplePos = kernelBasis * uKernelOffsets[i];
    }
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
        //gl_FragColor = texture2D(FBOTextureZDepth, TexCoord);
        gl_FragColor = texture2D(FBOTextureZDepth, TexCoord) + texture2D(FBOTextureNormal, TexCoord);
}
