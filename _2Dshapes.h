#ifndef _2DSHAPES_H
#define _2DSHAPES_H

#include <Shape.h>


class _2Dshapes : public Shape
{
    public:
        _2Dshapes();

    protected:
        virtual double area() = 0;

    private:
};

#endif // _2DSHAPES_H
