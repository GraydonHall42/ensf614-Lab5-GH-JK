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
    Shape(const Shape& source);
    Shape& operator =(Shape&s);

    double distance (Shape& other);
    static double distance (Shape& the_shape, Shape& other);
    void move (double dx, double dy);
    virtual void display();

    const Point & getOrigin() const{return origin;}
    char * getName() const{return shapeName;}
    
    // pure virtual functions... why do we get error if these aren't virtual?
    virtual double perimeter()=0;
    virtual double area()=0;
};


#endif