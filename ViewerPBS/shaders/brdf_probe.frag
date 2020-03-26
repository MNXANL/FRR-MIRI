#version 330

smooth in vec3 eye_normal;
smooth in vec3 eye_vertex;
smooth in vec3 camera_position;

uniform samplerCube specular_map;
uniform samplerCube diffuse_map;
uniform vec3 fresnel; //F0

// material parameters
uniform float metallic;
uniform float roughness;
uniform float ao;


const float PI = 3.14159265359;

vec3 color = vec3(0.6); //albedo

out vec4 frag_color;



float GeometrySchlickGGX(float NdotV, float k)
{
    float nom   = NdotV;
    float denom = NdotV * (1.0 - k) + k;
	
    return nom / denom;
}

float GeometrySmith(vec3 N, vec3 V, vec3 L, float roughness)
{
    float NdotV = max(dot(N, V), 0.0);
    float NdotL = max(dot(N, L), 0.0);
    float ggx2 = GeometrySchlickGGX(NdotV, roughness);
    float ggx1 = GeometrySchlickGGX(NdotL, roughness);

    return ggx1 * ggx2;
}

float DistributionGGX(vec3 N, vec3 H, float a)
{
    float a2     = a*a;
    float NdotH  = max(dot(N, H), 0.0);
    float NdotH2 = NdotH*NdotH;
	
    float nom    = a2;
    float denom  = (NdotH2 * (a2 - 1.0) + 1.0);
    denom        = PI * denom * denom;
	
    return nom / denom;
}


vec3 fresnelSchlick(float cosTheta, vec3 F0)
{
    return F0 + (1.0 - F0) * pow(1.0 - cosTheta, 5.0);
}

void main (void) {
 // Put the light in the infitine minus z.
 vec3 lightPosition = vec3(-1, 0, 0); // light position

 vec3 N = normalize(eye_normal);
 vec3 V = normalize( camera_position - eye_vertex); 
 //vec3 E = normalize(-eye_vertex);
 //vec3 R = normalize(-reflect(lightPosition, N));


 vec3 F0 = mix(fresnel, color, metallic);

 // calculate per-light radiance
 vec3 L = normalize(lightPosition - eye_vertex);
 vec3 H = normalize(V + L);
 float distance = length(lightPosition - eye_vertex);
 float attenuation = 1.0 / (distance * distance);
 vec3 radiance = lightPosition * attenuation;


 float NDF = DistributionGGX(N, H, roughness);   
 float G   = GeometrySmith(N, V, L, roughness);      
 vec3 F    = fresnelSchlick(clamp(dot(H, V), 0.0, 1.0), F0);

 vec3 nominator    = NDF * G * F; 
 float denominator = 4 * max(dot(N, V), 0.0) * max(dot(N, L), 0.0);
 vec3 specular = nominator / max(denominator, 0.001); 

 // kS is equal to Fresnel
 vec3 kS = F;
 
 vec3 kD = vec3(1.0) - kS;

 kD *= 1.0 - metallic;	

 float NdotL = max(dot(N, L), 0.0); 
 
 vec3 Lo = (kD * color / PI + specular) * radiance * NdotL;
 //calculate Ambient Term:
 vec3 ambient = vec3(0.03) * color * ao;

 vec3 fcolor = ambient + Lo;

 // HDR tonemapping
 fcolor = fcolor / (fcolor + vec3(1.0));
    // gamma correct
 fcolor = pow(fcolor, vec3(1.0/2.2)); 

 frag_color = vec4(fcolor, 1.0);

 //calculate Diffuse Term:
 //vec3 Idiff = color * vec3(max(dot(N, L), 0.0));

 // calculate Specular Term:
 //vec3 Ispec = color * pow(max(dot(R, E), 0.0), 2.2);
 //Ispec = clamp(Ispec, 0.0, 1.0);

 // write Total Color:
 //Frag_color = vec4(Iamb * 0.4 + Idiff * 0.6 + Ispec * 0.2, 1.0);
}