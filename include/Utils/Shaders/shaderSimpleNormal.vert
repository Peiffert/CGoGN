//ShaderSimpleNormal::vertexShaderText

ATTRIBUTE vec3 VertexPosition, VertexNormal;
uniform mat4 ModelViewProjectionMatrix;
uniform mat4 ModelViewMatrix;
VARYING_VERT vec3 Position;

#ifdef WITH_COLOR
VARYING_VERT vec3 Color;
#endif

INVARIANT_POS;
void main ()
{
        Position = vec3 (ModelViewMatrix * vec4 (VertexPosition, 1.0));
	gl_Position = ModelViewProjectionMatrix * vec4 (VertexPosition, 1.0);
}
