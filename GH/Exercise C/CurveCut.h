#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"


#ifndef CURVECUT
#define CURVECUT

class CurveCut: public Rectangle, public Circle{

protected:

public:
    CurveCut(double x, double y, double side_a, double side_b, double r, const char* name);
    virtual void display();
    virtual double area(){return Rectangle::area() - 0.25*Circle::area();}
    virtual double perimeter(){return Rectangle::area() -  0.25*Circle::perimeter() - 2*radius;}
    CurveCut(const CurveCut& source);
    CurveCut& operator =(CurveCut&s);
};


#endif