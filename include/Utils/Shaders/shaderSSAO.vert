// ShaderSSAO::vertexShaderText

ATTRIBUTE vec3 VertexPosition;
ATTRIBUTE vec2 VertexTexCoord;
uniform mat4 ModelViewProjectionMatrix;
VARYING_VERT vec2 texCoord;
INVARIANT_POS;
void main ()
{
        gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);
        texCoord = VertexTexCoord;
}

/*ShaderSSAO::vertexShaderText

ATTRIBUTE vec3 VertexPosition, VertexNormal;
#ifdef WITH_COLOR
ATTRIBUTE vec3 VertexColor;
#endif
uniform mat4 ModelViewProjectionMatrix;
uniform mat4 ModelViewMatrix;
uniform vec3 lightPosition;
VARYING_VERT vec3 LightDir;
VARYING_VERT vec3 Position;
VARYING_VERT vec2 TexCoord;
uniform sampler2D FBOTextureZDepth;
uniform sampler2D FBOTextureNormal;

#ifdef WITH_COLOR
VARYING_VERT vec3 Color;
#endif

INVARIANT_POS;
void main ()
{
        Position = vec3 (ModelViewMatrix * vec4 (VertexPosition, 1.0));
        LightDir = lightPosition - Position;
        #ifdef WITH_COLOR
                Color = VertexColor;
        #endif
        gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);
        TexCoord = (vec2 (VertexPosition.x, VertexPosition.y) + 1.0) / 2.0;
}
*/
