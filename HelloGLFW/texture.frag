#version 330 core
in vec3 ourColor;
in vec2 TexCoord1;
in vec2 TexCoord2;

out vec4 color;

// Texture samplers
uniform sampler2D ourTexture1;
uniform sampler2D ourTexture2;

//mix
uniform float mixParam;

void main()
{
	// Linearly interpolate between both textures (second texture is only slightly combined)
	//color = mix(texture(ourTexture1, TexCoord), texture(ourTexture2, TexCoord), 0.2);
	color =mix( texture(ourTexture1, TexCoord1), texture(ourTexture2, TexCoord2), mixParam);
}