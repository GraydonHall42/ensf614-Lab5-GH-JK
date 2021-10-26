// Square.h
// ENSF 614 Lab 5 Exercise B

#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"
#include "Shape.h"

class Square : virtual public Shape
{

public:
    Square(double x, double y, double side_a, const char *name);

    virtual double area();

    virtual double perimeter();

    virtual void display();

    int get_side_a();

    void set_side_a(int new_side_a);

protected:
    double side_a;
};

#endif