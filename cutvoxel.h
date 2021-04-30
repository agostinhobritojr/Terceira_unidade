# Ifndef CUTVOXEL_H
# define  CUTVOXEL_H
# inclui  " figurageometrica.h "


classe  CutVoxel : public  FiguraGeometrica
{
     int x, y, z;
público:
    CutVoxel ( int _x, int _y, int _z);
    void  draw (Sculptor & t);
    ~ CutVoxel ();
};

# endif  // CUTVOXEL_H
