#include "Point.h"
#include "Shape.h"

#ifndef CIRCLE
#define CIRCLE
class Circle: virtual public Shape{

protected:
    double radius;

public:
    Circle(double x, double y, double r, const char* name);
    virtual void display();
    double get_radius() const {return radius;}
    virtual double area(){return 3.14159265 * radius * radius;}
    virtual double perimeter(){return 3.14159265 * 2 * radius;}
    void set_radius(double value){radius = value;}
    Circle(const Circle& source);
    Circle& operator =(Circle&rhs);
};


#endif