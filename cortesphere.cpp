# inclui  " cortesphere.h "

CutSphere :: CutSphere ( int _xcenter, int _ycenter, int _zcenter, int _radius)
{
    xcenter = _xcenter; ycenter = _ycenter;
    zcenter = _zcenter; raio = _radius;
}

CutSphere :: ~ CutSphere ()
{

}


void  CutSphere :: draw (Sculptor & t) {
    float dx, dy, dz;
    int x1 = raio do centro x, x2 = centro x + raio, y1 = raio do centro y,
        y2 = centro y + raio, z1 = raio centro z, z2 = centro z + raio;
    para ( int i = x1; i <x2; i ++) {
        dx = (( static_cast < float > (i) -xcenter) / radius) * (( static_cast < float > (i) -xcenter) / radius);
        para ( int j = y1 ; j <y2; j ++) {
            dy = (( static_cast < float > (j) -ycenter) / raio) * (( static_cast < float > (j) -ycenter) / radius);
            para ( int k = z1; k <z2; k ++) {
                dz = (( static_cast < float > (k) -zcenter) / radius) * (( static_cast < float > (k) -zcenter) / radius);
                if (dx + dy + dz <= 1 ) {
                    t. cutVoxel (i, j, k);
                }
            }
        }
    }
}
