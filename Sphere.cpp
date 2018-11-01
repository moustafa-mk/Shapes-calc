#include "Sphere.h"

Sphere::Sphere()
{
    radius = 0;
}

Sphere::Sphere(double r)
{
    radius = r;
}

double Sphere::volume(){
    return (4*1.0/3) * 3.14 * radius * radius * radius;
}

double Sphere::surfaceArea(){
    return 4 * 3.14 * radius * radius;
}
