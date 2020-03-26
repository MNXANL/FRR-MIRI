#version 330

smooth in vec3 frag_normal;
smooth in vec3 frag_vertex;
smooth in vec3 camera_position;

uniform samplerCube specular_map;
uniform samplerCube diffuse_map;
uniform vec3 fresnel;

flat in vec3 eye_light_pos;

out vec4 frag_color;

// constants
float PI    = 3.1415926535897932384626433832795;
float GAMMA = 0.4545454545454545454545454545454; // 1.0 / 2.2



// GEOMETRY FUNCTIONS
float G1( float dotNV, float k) // Geo Function 1: Schlick | GGX
{
    return dotNV / ( dotNV + (1.0-k) + k);
}

float G2( float dotNV, float dotNL, float k) // Geo Function 2: Smith
{
    return G1(dotNV, k) * G1(dotNL, k);
}




// FRESNEL-SCHLICK
vec3 fresnelSchlick( vec3 F0, float theta )
{
    return F0 + (1.0 - F0) * pow(1.0-theta, 5.0);
}




// SHADER MAIN CODE

void main (void) {
    // Vector fun
 vec3 L = normalize(vec3(0, 1, 0) - frag_vertex);

 vec3 N = normalize( frag_normal ); //normalized normal from eye coords
 vec3 V = normalize( camera_position - frag_vertex ); // where the eye points to
 vec3 R = normalize( reflect( N, V ) );

 vec3 H = normalize (V+L);


 // BRDF calcs
 vec3 F = fresnelSchlick( fresnel, max(0.0, dot(H, V)) );

 vec3 kS = F;  // note that kS == F
 vec3 kD = vec3(1.0f) - kS;

 vec3 G = vec3( 1.0 );
 G = vec3( G1(dot(N, V), 1.0) ); // range [0 .. 1] in reals
 G = vec3( G2(dot(N, V), dot(N, L), 1.0) ); // range [0 .. 1] in reals

 vec3 D = texture( diffuse_map, R ).rgb;


 vec3 SPECULAR = ( D*F*G ) / ( vec3(4.0) * max(0.0, dot(N, V)) * max(0.0, dot(H, V)) );
 vec3 DIFFUSE  = texture( specular_map, R ).rgb / vec3( PI );


 vec3 brdfCol = kD*DIFFUSE + SPECULAR;
 brdfCol = pow( brdfCol, vec3(GAMMA) ); // Gamma correction

 // write Total Color:
 frag_color = vec4(brdfCol, 1.0) ;
}
