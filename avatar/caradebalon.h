#ifndef CARADEBALON_H
#define CARADEBALON_H
#include <QPainter>
#include "cara.h"
class caradebalon: public Cara
{
public:
    int _x;
    int _y;
    caradebalon(int x,int y):Cara(x,y){
        _x=x;
        _y=y;
    }

    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/LENOVO/Desktop/la salle/2018-2/programacion/avatar/LP3-proyect-master/build-avatar-Desktop_Qt_5_6_2_MSVC2015_32bit-Debug/balon1.png");
      DrawHere->drawImage(_x,_y,image1);
    }

};
#endif // CARADEBALON_H
