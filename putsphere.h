# Ifndef PUTSPHERE_H
# define  PUTSPHERE_H
# inclui  " figurageometrica.h "


classe  PutSphere : public  FiguraGeometrica
{
    int xcenter, ycenter, zcenter, raio;
    flutuante r, g, b, a;

público:
    PutSphere ( int _xcenter, int _ycenter, int _zcenter, int _radius, float _r, float _g, float _b, float _a );
    void  draw (Sculptor & t);
    ~ PutSphere ();
};

# endif  // PUTSPHERE_H
