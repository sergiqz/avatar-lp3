#ifndef OJOSENOJADOS_H
#define OJOSENOJADOS_H
#include <QPainter>
#include "ojos.h"
class ojosenojados: public Ojos
{
public:
    int _x;
    int _y;
    ojosenojados(int x,int y):Ojos(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/LENOVO/Desktop/la salle/2018-2/programacion/avatar/LP3-proyect-master/build-avatar-Desktop_Qt_5_6_2_MSVC2015_32bit-Debug/enojado.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // OJOSENOJADOS_H
