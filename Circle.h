#ifndef CIRCLE_H
#define CIRCLE_H

#include <_2Dshapes.h>


class Circle : public _2Dshapes
{
    public:
        Circle();
        Circle(double r);

        double Getradius() { return radius; }
        void Setradius(double val) { radius = val; }
        double area();

    protected:

    private:
        double radius;
};

#endif // CIRCLE_H
