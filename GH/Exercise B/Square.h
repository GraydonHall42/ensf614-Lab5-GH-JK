#include "Point.h"
#include "Shape.h"

#ifndef SQUARE
#define SQUARE
class Square: public Shape{

protected:
    double side_a;

public:
    Square(double x, double y, double side_a, const char* name);
    virtual void display();
    double get_side_a() const {return side_a;}
    virtual double area(){return side_a * side_a;}
    virtual double perimeter(){return 4 * side_a;}
    void set_side_a(double value){side_a = value;}
    Square(const Square& source);
    Square& operator =(Square&s);
};


#endif