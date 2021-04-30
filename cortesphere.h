# Ifndef CUTSPHERE_H
# define  CUTSPHERE_H
# inclui  " figurageometrica.h "

classe  CutSphere : public  FiguraGeometrica
{
    int xcenter, ycenter, zcenter, raio;
público:
    CutSphere ( int _xcenter, int _ycenter, int _zcenter, int _radius);
    void  draw (Sculptor & t);
    ~ CutSphere ();

};

# endif  // CUTSPHERE_H
