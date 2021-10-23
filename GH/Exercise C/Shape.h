#include "Point.h"

#ifndef SHAPE
#define SHAPE
class Shape{

protected:
    Point origin;
    char * shapeName;

public:
    Shape(double x, double y, const char* name);
    ~Shape(){delete shapeName;}
    const Point & getOrigin() const{return origin;}
    virtual void display();
    double distance (Shape& other);
    static double distance (Shape& the_shape, Shape& other);
    void move (double dx, double dy);
    char * getName() const{return shapeName;}
    Shape(const Shape& source);
    Shape& operator =(Shape&s);
};


#endif