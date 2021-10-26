// Circle.h
// ENSF 614 Lab 5 Exercise B

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : virtual public Shape
{

public:
    Circle(double x, double y, double radius, const char *name);

    virtual double area();

    virtual double perimeter();

    virtual void display();

    int get_radius();

    void set_radius(int new_radius);

protected:
    double radius;
};

#endif