#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec3 color;

out vec3 ourColor;
out vec3 ourPosition;
uniform vec3 dispos;

void main()
{
    gl_Position = vec4(position.x+dispos.x,position.y+dispos.y,position.z+dispos.z, 1.0f);
    ourColor = color;
	ourPosition = position;
}