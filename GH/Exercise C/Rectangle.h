#include "Point.h"
#include "Shape.h"
#include "Square.h"

#ifndef RECTANGLE
#define RECTANGLE
class Rectangle: public Square{

protected:
    double side_b;

public:
    Rectangle(double x, double y, double a, double b, const char* name);
    virtual void display();
    double get_side_b() const{return side_b;}
    virtual double area(){return side_a * side_b;}
    virtual double perimeter(){return 2 * side_a + 2*side_b;}
    void set_side_b(double value){side_b = value;}
    Rectangle(const Rectangle& source);
    Rectangle& operator =(Rectangle&s);
};


#endif