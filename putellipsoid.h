# Ifndef PUTELLIPSOID_H
# define  PUTELLIPSOID_H
# inclui  " figurageometrica.h "


classe  PutEllipsoid : public  FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;
     flutuante r, g, b, a;

público:
    PutEllipsoid ( int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz, float _r, float _g, float _b, float _a );
    void  draw (Sculptor & t);
    ~ PutEllipsoid ();

};

# endif  // PUTELLIPSOID_H
