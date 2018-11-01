#ifndef _3DSHAPES_H
#define _3DSHAPES_H

#include <Shape.h>


class _3Dshapes : public Shape
{
    public:
        _3Dshapes();

    protected:
        virtual double surfaceArea() = 0;
        virtual double volume() = 0;

    private:
};

#endif // _3DSHAPES_H
