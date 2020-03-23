#ifndef CUBE_COORDS_H
#define CUBE_COORDS_H


#include <eigen3/Eigen/Geometry>
#include <vector>
#include <GL/glew.h>
using namespace std;


//              ^ +Y
//              |

//           v2----- v5                ^ -Z
//          /|      /|                /
//         v3------v7|               /
//         | |     | |              /
// -X <-   | |v0---|-|v4   -> +X   /
//         |/      |/             /
//         v1------v6            /
//                              V +Z
//              |
//              V -Y


GLfloat cubeVtx[] ={
    -1, -1, -1,       //0
    -1, -1,  1,       //1
    -1,  1, -1,       //2
    -1,  1,  1,       //3

     1, -1, -1,       //4
     1, -1,  1,       //5
     1,  1, -1,       //6
     1,  1,  1        //7
};

/** CW
GLubyte cubeFaceIdx[] = {
    4, 6, 5,      7, 8, 6,  // right  face
    1, 0, 2,      3, 1, 2,  // left   face

    1, 6, 7,      1, 7, 3,  // front  face
    4, 0, 5,      5, 0, 2,  // back   face

    5, 7, 3,      2, 5, 3,  // top    face
    4, 1, 0,      6, 1, 4   // bottom face
};**/

/** CCW **/
GLubyte cubeFaceIdx[] = {
    0, 1, 2
    /*6, 4, 5,      5, 7, 6,  // right  face
    0, 1, 2,      1, 3, 2,  // left   face

    6, 1, 7,      7, 1, 3,  // front  face
    0, 4, 5,      0, 5, 2,  // back   face

    7, 5, 3,      5, 2, 3,  // top    face
    1, 4, 0,      1, 6, 4   // bottom face
        */
};


#endif // CUBE_COORDS_H
