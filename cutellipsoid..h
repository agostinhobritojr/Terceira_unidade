# Ifndef CUTELLIPSOID_H
# define  CUTELLIPSOID_H
# inclui  " figurageometrica.h "

classe  CutEllipsoid : public  FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;
público:
    CutEllipsoid ( int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);
    void  draw (Sculptor & t);
    ~ CutEllipsoid ();
};

# endif  // CUTELLIPSOID_H
