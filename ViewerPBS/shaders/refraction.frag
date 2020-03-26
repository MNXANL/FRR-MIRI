#version 330 core
out vec4 FragColor;

in vec3 frag_normal;
in vec3 frag_vertex;
in vec3 camera_position;

uniform samplerCube specular_map;

void main()
{             
    float ratio = 1.00 / 1.52;
    vec3 I = normalize(frag_vertex - camera_position);
    vec3 R = refract(I, normalize(frag_normal), ratio);

    vec3 gamma = pow(texture(specular_map,R).rgb, vec3(1.0/2.2));
    FragColor = vec4(gamma, 1.0);
}  