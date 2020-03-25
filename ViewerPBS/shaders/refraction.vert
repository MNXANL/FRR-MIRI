#version 330 core
layout (location = 0) in vec3 vertex;
layout (location = 1) in vec3 normal;

out vec3 frag_normal;
out vec3 frag_vertex;
out vec3 camera_position;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    camera_position = inverse(view)[3].xyz;
    frag_normal = mat3(transpose(inverse(model))) * normal;
    frag_vertex = vec3(model * vec4(vertex, 1.0));
    gl_Position = projection * view * vec4(frag_vertex, 1.0);
}  
