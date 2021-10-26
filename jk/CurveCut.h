// Point.h
// ENSF 614 Lab 5 Exercise B

#ifndef CURVE_CUT_H
#define CURVE_CUT_H

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

class CurveCut : public Rectangle, public Circle
{

public:
    CurveCut(double x, double y, double side_a, double side_b, double radius, const char *name);

    double area();

    double perimeter();

    void display();

private:
};

#endif