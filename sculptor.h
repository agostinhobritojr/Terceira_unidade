# ifndef SCULPTOR_H
# define  SCULPTOR_H

# inclui  < string >

struct  Voxel {
  flutuante r, g, b; // Colors
  float a;
// Transparência
  bool isOn; // Incluído ou não
};

classe  Escultor {
protegido:
  Voxel *** v;
  // matriz 3D
  int nx, ny, nz; // Dimensions
  flutuante r, g, b, a; // Cor do desenho atual
público:
  Escultor ( int x, int y, int z);
  void  setColor ( float _r, float _g, float _b, float alfa);
  void  putVoxel ( int _x, int _y, int _z);
  void  cutVoxel ( int _x, int y, int _z);
  void  putBox ( int x0, int x1, int y0, int y1, int z0, int z1);
  void  cutBox ( int x0, int x1, int y0, int y1, int z0, int z1);
  void  putSphere ( int xcenter, int ycenter, int zcenter, int radius);
  void  cutSphere ( int xcenter, int ycenter, int zcenter, int radius);
  void  putEllipsoid ( int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void  cutEllipsoid ( int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void  writeOFF ( const std :: string filename);

  ~ Escultor ();
};




# endif  // ESCULTOR_H
