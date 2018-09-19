#ifndef CARAOVALADA_H
#define CARAOVALADA_H
#include <QPainter>
#include "cara.h"
class caraovalada: public Cara
{
public:
    int _x;
    int _y;
    caraovalada(int x,int y):Cara(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/LENOVO/Desktop/la salle/2018-2/programacion/avatar/LP3-proyect-master/build-avatar-Desktop_Qt_5_6_2_MSVC2015_32bit-Debug/calvo1.png");
      DrawHere->drawImage(_x,_y,image1);

    }
};



#endif // CARAOVALADA_H
