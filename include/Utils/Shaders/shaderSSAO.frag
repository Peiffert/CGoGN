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
    /*float depth = texture2D(FBOTextureNormal, texCoord)[3];

    // Rotation matrix
    vec3 vZ = vec3(0.0,0.0,1.0);
    vec3 vRot = cross(vZ, vNormal);
    float aRot = acos(dot(vZ, vNormal));
    mat3 mRot = mat3(
        vRot[0]*vRot[0]+(1.0-vRot[0])*cos(aRot), vRot[0]*vRot[1]*(1.0-cos(aRot))-vRot[2]*sin(aRot), vRot[0]*vRot[2]*(1.0-cos(aRot))+vRot[1]*sin(aRot),
        vRot[0]*vRot[1]*(1.0-cos(aRot))+vRot[2]*sin(aRot), vRot[1]+(1.0-vRot[1]*vRot[1])*cos(aRot), vRot[1]*vRot[2]*(1.0-cos(aRot))-vRot[0]*sin(aRot),
        vRot[0]*vRot[2]*(1.0-cos(aRot))-vRot[1]*sin(aRot), vRot[1]*vRot[2]*(1.0-cos(aRot))+vRot[0]*sin(aRot), vRot[2]*vRot[2]+(1.0-vRot[2]*vRot[2])*cos(aRot)
        );

    // Scale matrix
    float scale = uRadius/texCoord[0]; // /depth ??
    mat3 mScale = mat3(scale);

    //Position on screen
    //vec2 position = 2*texCoord -vec2(1,1); NOT NEEDED

    float occlusion = 0.0;
    vec3 resultTemp=vec3(0.0,0.0,0.0);
    //For each point of the half-sphere
    for (int i = 0; i < 1; i++) {
        resultTemp+=uKernelOffsets[i];
    }*/
        /*
        //Compute its location
        //vec3 samplePoint = position + mRot * mScale * uKernelOffsets[i]; NOT NEEDED
        //Compute equivalent coordinates on depth texture NOT NEEDED
        //vec3 positionOnTexture =  2*texCoord -vec2(1,1); NOT NEEDED
        vec3 samplePoint = vec3(texCoord,0) + mRot * mScale * uKernelOffsets[i];
        //bvec  = lessThan(samplePoint, vec3(1.0,1.0,0.0));
        //bvec  = lessThan(samplePoint, vec3(1.0,1.0,0.0));
        //if(samplePoint[0]<1.0 && samplePoint[1]<1.0 && samplePoint[0]>0.0 && samplePoint[1]>0.0)
        //{
            //Depth on the texture at the sample position
            float depth = 0.0;//texture2D(FBOTextureNormal, vec2(samplePoint[0],samplePoint[1]))[3];
            //samplePoint[2] = 1.0;
            if(depth<samplePoint[2])
            {
                //occlusion = 1.0;
                occlusion = occlusion + 1.0/float(uKernelSize);
            }
        //}
    }*/

    //gl_FragColor = vec4((vNormal[0]+1.0)/2.0*(1.0-occlusion),(vNormal[1]+1.0)/2.0*(1.0-occlusion),(vNormal[2]+1.0)/2.0*(1.0-occlusion),0.0);
    gl_FragColor = vec4((vNormal[0]+1.0)/2.0,(vNormal[1]+1.0)/2.0,(vNormal[2]+1.0)/2.0,0.0);
}
