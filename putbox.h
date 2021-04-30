# Ifndef PUTBOX_H
# define  PUTBOX_H
# inclui  " figurageometrica.h "


classe  PutBox : public  FiguraGeometrica
{
    int x0, y0, z0, x1, y1, z1;
     flutuante r, g, b, a;

público:
    PutBox ( int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a );
    void  draw (Sculptor & t);
    ~ PutBox ();
};

# endif  // PUTBOX_H
