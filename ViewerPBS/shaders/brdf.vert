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


/*#version 330

smooth in vec3 eye_normal;
smooth in vec3 eye_vertex;

uniform samplerCube specular_map;
uniform samplerCube diffuse_map;
uniform vec3 fresnel;

flat in vec3 eye_light_pos;

vec3 color = vec3(0.6);

out vec4 frag_color;

vec3 fresnelSchlick(float cosTheta, vec3 F0)
{
    return F0 + (1.0 - F0) * pow(1.0 - cosTheta, 5.0);
}

void main (void) {
 // Put the light in the infitine minus z.
 vec3 L = vec3(-1, 0, 0);

 vec3 N = normalize(eye_normal);
 vec3 E = normalize(-eye_vertex);
 vec3 R = normalize(-reflect(L, N));

 //calculate Ambient Term:
 vec3 Iamb = color;

 //calculate Diffuse Term:
 vec3 kS = fresnelSchlick(max(dot(N, eye_vertex), 0.0), F0);
 vec3 Idiff = color * vec3(max(dot(N, L), 0.0));

 // calculate Specular Term:
 vec3 kD = 1.0 - kS;
 vec3 Ispec = color * pow(max(dot(R, E), 0.0), 2.2);
 Ispec = clamp(Ispec, 0.0, 1.0);

 // write Total Color:
 frag_color = vec4(Iamb * 0.4 + Idiff * 0.6 + Ispec * 0.2, 1.0);
}*/
