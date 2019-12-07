#ifndef GRAPHS_H
#define GRAPHS_H
#define DRAWNOTHING 0
#define DDALINE 1
#define BRELINE 2
#define ELLIPSE 3
#define DDAPOLYGON 4
#define BREPOLYGON 5
#define BEZCUR 6
#define BSPLINECUR 7

#include <QColor>
#include "math.h"

class Graphs
{
public:
    int id;
    int type;
    QColor color;
    Graphs();
    void virtual translate(int x,int y);
    void virtual rotate(int x,int y,int r);
    void virtual scale(int x,int y,float s);
};



#endif // GRAPHS_H
