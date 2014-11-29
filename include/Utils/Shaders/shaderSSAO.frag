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
uniform float uRadius;// = 1.5
/****** Puissance de l'occlusion ******/
uniform float uPower;// = 2.0
FRAG_OUT_DEF;

void main()
{
    // Normal and depth from uniform texture
    vec3 vNormal = vec3 (texture2D(FBOTextureNormal, texCoord));
    float depth = texture2D(FBOTextureNormal, texCoord)[3];

    // Rotation matrix
    vec3 vZ = vec3(0.0,0.0,1.0);
    vec3 vRot = cross(vZ, vNormal);
    float aRot = acos(dot(vZ, vNormal));
    mat3 mRot;
    mRot[0][0] = vRot[0]*vRot[0]+(1.0-vRot[0]*vRot[0])*cos(aRot);
    mRot[0][1] = vRot[0]*vRot[1]*(1.0-cos(aRot))-vRot[2]*sin(aRot);
    mRot[0][2] = vRot[0]*vRot[2]*(1.0-cos(aRot))+vRot[1]*sin(aRot);
    mRot[1][0] = vRot[0]*vRot[1]*(1.0-cos(aRot))+vRot[2]*sin(aRot);
    mRot[1][1] = vRot[1]*vRot[1]+(1.0-vRot[1]*vRot[1])*cos(aRot);
    mRot[1][2] = vRot[1]*vRot[2]*(1.0-cos(aRot))-vRot[0]*sin(aRot);
    mRot[2][0] = vRot[0]*vRot[2]*(1.0-cos(aRot))-vRot[1]*sin(aRot);
    mRot[2][1] = vRot[1]*vRot[2]*(1.0-cos(aRot))+vRot[0]*sin(aRot);
    mRot[2][2] = vRot[2]*vRot[2]+(1.0-vRot[2]*vRot[2])*cos(aRot);
    /*mat3 mRot = mat3(
        pow(vRot[0],2)+(1-pow(vRot[0],2))*cos(aRot), vRot[0]*vRot[1]*(1-cos(aRot))-vRot[2]*sin(aRot), vRot[0]*vRot[2]*(1-cos(aRot))+vRot[1]*sin(aRot),
        vRot[0]*vRot[1]*(1-cos(aRot))+vRot[2]*sin(aRot), pow(vRot[1],2)+(1-pow(vRot[1],2))*cos(aRot), vRot[1]*vRot[2]*(1-cos(aRot))-vRot[0]*sin(aRot),
        vRot[0]*vRot[2]*(1-cos(aRot))-vRot[1]*sin(aRot), vRot[1]*vRot[2]*(1-cos(aRot))+vRot[0]*sin(aRot), pow(vRot[2],2)+(1-pow(vRot[2],2))*cos(aRot)
        );*/

    // Scale factor
    float scale = float(uKernelSize); // /depth ??

    //Position on screen
    //vec2 position = 2*texCoord -vec2(1,1); NOT NEEDED

    float occlusion = 0.0;
    //For each point of the half-sphere
    for (int i = 0; i < uKernelSize; ++i) {
        //Compute its location
        //vec3 samplePoint = position + scale * mRot * uKernelOffsets[i]; NOT NEEDED
        //Compute equivalent coordinates on depth texture NOT NEEDED
        //vec3 positionOnTexture =  2*texCoord -vec2(1,1); NOT NEEDED
        vec3 samplePoint = vec3(texCoord,0) + scale * mRot * uKernelOffsets[i];
        if(samplePoint[0]<0.99 && samplePoint[1]<0.99 && samplePoint[0]>0.01 && samplePoint[1]>0.01)
        {
            //Depth on the texture at the sample position
            float depth = texture2D(FBOTextureNormal, vec2(samplePoint[0],samplePoint[1]))[3];
            if(depth<samplePoint[2])
                occlusion = occlusion + 1.0/float(uKernelSize);
        }
    }
    //gl_FragColor = texture2D(FBOTextureZDepth, texCoord);
    gl_FragColor = vec4(occlusion*100.0,occlusion*100.0,occlusion*100.0,1.0);
}

/*

//	get view space origin:
        //Position du fragment dans le viewspace
        float originDepth = texture(uGBufferDepthTex, vertexIn.texCoord).r; // On prend le rouge ??!
        originDepth = linearizeDepth(originDepth, uProjectionMatrix); // On linéralise
        vec3 originPos = vertexIn.viewRay * originDepth; // Fragment's view space position

//	get view space normal:
        //Normal du fragment dans le viewspace
        vec3 normal = decodeNormal(texture(uGBufferGeometricTex, vertexIn.texCoord).rgb);

//	construct kernel basis matrix:
        //Matrice de changement de base (pour réorienterle noyau le long de la normale)
//On récupère un vecteur aléatoire de notre texture bruitée.
        vec3 rvec = texture(uNoiseTex, noisetexCoords).rgb * 2.0 - 1.0;
//Gram-Schmidt process to compute an orthogonal basis, incorporating our random rotation vector rvec.
        vec3 tangent = normalize(rvec - normal * dot(rvec, normal));
        vec3 bitangent = cross(tangent, normal);
//Constructs the transformation matrix. The normal vector fills the z component of our matrix because that is the axis along which the base kernel is oriented.
        mat3 kernelBasis = mat3(tangent, bitangent, normal);*/
