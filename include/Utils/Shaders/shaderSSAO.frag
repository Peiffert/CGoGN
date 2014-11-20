//version 150
PRECISON;


// ************Profondeur linéiarisée (depth => z-buffer 0->1 ?)************

// return 1/ (depth - (-clipnear-clipfar)/(clipnear-clipfar)) soit environ : 1/(depth-0,999)
float linearizeDepth(in float depth, in mat4 projMatrix) {
        return projMatrix[3][2] / (depth - projMatrix[2][2]);
}


// ************Profondeur linéiarisé************

vec3 decodeNormal(in vec3 normal) {
        return normal * 2.0 - 1.0;
}

//layout(binding) est le type opaque
/****** Anti-aliasing FBO ??? ******/
layout(binding=0) uniform sampler2D uGBufferGeometricTex;
/****** Profondeur FBO ******/
layout(binding=1) uniform sampler2D uGBufferDepthTex;
/****** Rotation des noyaux (sphères) tests pour créer du bruit ******/
layout(binding=2) uniform sampler2D uNoiseTex;
//(=vTexcoord * uNoiseScale : uNoiseScale is a vec2 which scales vTexcoord to tile the noise texture)

uniform mat4 uProjectionMatrix; // current projection matrix, for linearized depth

//	ssao uniforms:
const int MAX_KERNEL_SIZE = 128;
/******Taille du noyau unitaire (en nombre de points tests)******/
uniform int uKernelSize;
/******noyaux******/
uniform vec3 uKernelOffsets[MAX_KERNEL_SIZE];
/****** Rayon du noyau unitaire ******/
uniform float uRadius = 1.5;
/****** Puissance de l'occlusion ******/
uniform float uPower = 2.0;


/****** VertexDataT provient du vertex Shader SAQuadModel.vs.glsl ******/
in VertexDataT {
        smooth vec3 position; // view space position
        smooth vec2 texcoord; // required => copied through from aTexcoord
        smooth mat3 tangentViewMatrix; // tangent->view space matrix
        noperspective vec3 viewRay; // required => ray to far plane (use linear interpolation)
} vertexIn;

layout(location=0) out vec4 fResult;

/*----------------------------------------------------------------------------*/
float ssao(in mat3 kernelBasis, in vec3 originPos, in float radius) {
        float occlusion = 0.0;
        // Pour chaque point de notre noyau
        for (int i = 0; i < uKernelSize; ++i) {
        //	get sample position:
                vec3 samplePos = kernelBasis * uKernelOffsets[i];
                samplePos = samplePos * radius + originPos;

        //	project sample position:
                vec4 offset = uProjectionMatrix * vec4(samplePos, 1.0);
                offset.xy /= offset.w; // only need xy
                offset.xy = offset.xy * 0.5 + 0.5; // scale/bias to texcoords

        //	get sample depth: (positif =on augmente l'occusion si dedans)
                float sampleDepth = texture2D(uGBufferDepthTex, offset.xy).r;
                sampleDepth = linearizeDepth(sampleDepth, uProjectionMatrix);

                // Enlève les grandes valeurs (correspondant à une profondeur entre deux objets/bord d'un maillage)
                float rangeCheck = smoothstep(0.0, 1.0, radius / abs(originPos.z - sampleDepth));
                occlusion += rangeCheck * step(sampleDepth, samplePos.z);
        }

        //The final step is to normalize the occlusion factor and invert it, in order to produce a value that can be used to directly scale the light contribution.
        occlusion = 1.0 - (occlusion / float(uKernelSize));
        return pow(occlusion, uPower);
}

/*----------------------------------------------------------------------------*/
void main() {
//	get noise texture coords:
        /******  TextureDeBruit = Profondeur/Rotation noyau******/
        vec2 noiseTexCoords = vec2(textureSize(uGBufferDepthTex, 0)) / vec2(textureSize(uNoiseTex, 0));
        noiseTexCoords *= vertexIn.texcoord;

//	get view space origin:
        /****** Position du fragment dans le viewspace ******/
        float originDepth = texture(uGBufferDepthTex, vertexIn.texcoord).r; // On prend le rouge ??!
        originDepth = linearizeDepth(originDepth, uProjectionMatrix); // On linéralise
        vec3 originPos = vertexIn.viewRay * originDepth; // Fragment's view space position

//	get view space normal:
        /****** Normal du fragment dans le viewspace ******/
        vec3 normal = decodeNormal(texture(uGBufferGeometricTex, vertexIn.texcoord).rgb);

//	construct kernel basis matrix:
        /****** Matrice de changement de base (pour réorienterle noyau le long de la normale)******/
//On récupère un vecteur aléatoire de notre texture bruitée.
        vec3 rvec = texture(uNoiseTex, noiseTexCoords).rgb * 2.0 - 1.0;
//Gram-Schmidt process to compute an orthogonal basis, incorporating our random rotation vector rvec.
        vec3 tangent = normalize(rvec - normal * dot(rvec, normal));
        vec3 bitangent = cross(tangent, normal);
//Constructs the transformation matrix. The normal vector fills the z component of our matrix because that is the axis along which the base kernel is oriented.
        mat3 kernelBasis = mat3(tangent, bitangent, normal);

        fResult = vec4(ssao(kernelBasis, originPos, uRadius));
}
