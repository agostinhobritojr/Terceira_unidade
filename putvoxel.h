# Ifndef PUTVOXEL_H
# define  PUTVOXEL_H
# inclui  " figurageometrica.h "


classe  PutVoxel : public  FiguraGeometrica
{
    int x, y, z;
    flutuante r, g, b, a;

público:
    PutVoxel ( int _x, int _y, int _z, float _r, float _g, float _b, float _a );
    void  draw (Sculptor & t);
    ~ PutVoxel ();
};

# endif  // PUTVOXEL_H
