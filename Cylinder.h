#ifndef CYLINDER_H
#define CYLINDER_H

#include <_3Dshapes.h>


class Cylinder : public _3Dshapes
{
    public:
        /** Default constructor */
        Cylinder();

        Cylinder(double, double);

        /** Access radius
         * \return The current value of radius
         */
        double Getradius() { return radius; }
        /** Set radius
         * \param val New value to set
         */
        void Setradius(double val) { radius = val; }
        /** Access height
         * \return The current value of height
         */
        double Getheight() { return height; }
        /** Set height
         * \param val New value to set
         */
        void Setheight(double val) { height = val; }

        double volume();
        double surfaceArea();

    protected:

    private:
        double radius; //!< Member variable "radius"
        double height; //!< Member variable "height"
};

#endif // CYLINDER_H
