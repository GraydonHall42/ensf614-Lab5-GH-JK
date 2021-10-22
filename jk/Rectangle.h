// Point.h
// ENSF 614 Lab 5 Exercise B

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Shape.h"
#include "Square.h"

class Rectangle : public Square
{

public:
    Rectangle(double x, double y, double side_a, double side_b, const char *name);

    double area();

    double perimeter();

    double get_side_b();

    void set_side_b(double new_side_b);

    void display();

private:
    double side_b;
};

#endif