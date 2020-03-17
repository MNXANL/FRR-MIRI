# FRR-MIRI
Fast Realistic Rendering

## How to compile PBR

# Linux
Enter the **ViewerPBS** folder, then `qmake-qt5 && make`
Access the `release` folder and run `./ViewerPBS` 

# Windows
## Compilation on Visual Studio 
## Previous dependencies of Visual Studio
Desktop Development for C++ with Windows 10 SDK
Qt VS tools [link](https://doc.qt.io/qtvstools/index.html)
## Libraries
You need the following libraries:
**Eigen**: You can download from this link [link](https://bitbucket.org/eigen/eigen/src/default/) 
**OpenGL Mathematics(GLM)**: You can download from this link [link](https://github.com/g-truc/glm/tags) 
**Eigen**: You can download from this link [link](http://eigen.tuxfamily.org/index.php?title=Main_Page) 
## Add libraries to Visual Studio
Add headers folders to Project -> Properties ->  C/C++ -> Additional Include Directories
Add lib folders to Project -> Properties -> Linkers -> General -> Additional Library Directories
Add glew32.lib;opengl32.lib;glu32.lib to Project -> Properties -> Linkers -> Additional Dependicies
## Create Qt dependencies for Windows
Use the following command:
`windeployqt ViewerPBS.exe`
