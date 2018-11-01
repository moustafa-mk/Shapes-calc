#ifndef SPHERE_H
#define SPHERE_H

#include <_3Dshapes.h>


class Sphere : public _3Dshapes
{
    public:
        /** Default constructor */
        Sphere();

        Sphere(double);

        /** Access radius
         * \return The current value of radius
         */
        double Getradius() { return radius; }
        /** Set radius
         * \param val New value to set
         */
        void Setradius(double val) { radius = val; }

        double volume();
        double surfaceArea();

    protected:

    private:
        double radius; //!< Member variable "radius"
};

#endif // SPHERE_H
