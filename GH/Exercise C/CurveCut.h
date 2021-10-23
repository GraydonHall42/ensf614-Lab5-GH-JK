#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"

#ifndef CURVECUT
#define CURVECUT

class CurveCut: public Rectangle, public Circle{

protected:

public:
    CurveCut(double x, double y, double side_a, double side_b, double r, const char* name);
    void display();
    double area();
    double perimeter();
    CurveCut(const CurveCut& source);
    CurveCut& operator =(CurveCut&s);
};


#endif