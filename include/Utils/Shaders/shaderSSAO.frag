//ShaderSSAO::fragmentShaderText

PRECISON;
VARYING_FRAG vec2 texCoord;
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
    //float textureDepth = texture2D(FBOTextureZDepth, TexCoord);
    vec3 normal = texture2D(FBOTextureNormal, TexCoord);

    for (int i = 0; i < uKernelSize; ++i) {
        vec3 samplePos = kernelBasis * uKernelOffsets[i];
    }
    //gl_FragColor = texture2D(FBOTextureZDepth, TexCoord);
    gl_FragColor = texture2D(FBOTextureNormal, TexCoord);
}
