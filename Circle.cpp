#include "Circle.h"
#include "_2Dshapes.h"

Circle::Circle()
{
    radius = 0;
}

Circle::Circle(double r){
    radius = r;
}

double Circle::area(){
    return 3.14 * radius * radius;
}
