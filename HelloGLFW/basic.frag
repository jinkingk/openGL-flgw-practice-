#version 330 core
in vec3 ourColor;
in vec3 ourPosition;
out vec4 color;

void main()
{
    color = vec4(ourPosition.x,ourPosition.y,ourPosition.z ,1.0f);
}