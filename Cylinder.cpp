#include "Cylinder.h"

Cylinder::Cylinder()
{
    radius = 0;
    height = 0;
}

Cylinder::Cylinder(double r, double h)
{
    radius = r;
    height = h;
}

double Cylinder::volume(){
    return 3.14 * radius * radius * height;
}

double Cylinder::surfaceArea(){
    return 4 * 3.14 * radius * height;
}
