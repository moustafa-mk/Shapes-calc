#ifndef SQUARE_H
#define SQUARE_H

#include <_2Dshapes.h>


class Square : public _2Dshapes
{
    public:
        /** Default constructor */
        Square();

        /** Parameterized constructor */
        Square(double s);

        /** Access sideLength
         * \return The current value of sideLength
         */
        double GetsideLength() { return sideLength; }
        /** Set sideLength
         * \param val New value to set
         */
        void SetsideLength(double val) { sideLength = val; }

        double area();

    protected:

    private:
        double sideLength; //!< Member variable "sideLength"
};

#endif // SQUARE_H
