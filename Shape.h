#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

class Shape
{
    public:
        Shape();

        string Getcolor() { return color; }
        void Setcolor(string val) { color = val; }

    protected:

    private:
        string color;
};

#endif // SHAPE_H
