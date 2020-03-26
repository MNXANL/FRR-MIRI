#version 330

layout (location = 0) in vec3 vert;
layout (location = 2) in vec3 normal;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;
uniform mat3 normal_matrix;

smooth out vec3 eye_normal;
smooth out vec3 eye_vertex;
smooth out vec3 camera_position;

void main(void)  {
  camera_position = inverse(view)[3].xyz;
  vec4 view_vertex = view * model * vec4(vert, 1);
  eye_vertex = view_vertex.xyz;
  eye_normal = normalize(normal_matrix * normal);
  gl_Position = projection * view_vertex;
}