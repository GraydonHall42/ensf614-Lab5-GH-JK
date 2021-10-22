// Point.h
// ENSF 614 Lab 5 Exercise B

#include "Point.h"

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{

public:
    Shape(double x, double y, const char *name);

    ~Shape();

    Point &getOrigin();

    char *getName();

    virtual void display();

    double distance(Shape &other);

    static double distance(Shape &the_shape, Shape &other);

    void move(double dx, double dy);

protected:
    Point origin;
    char *shapeName;
};

#endif