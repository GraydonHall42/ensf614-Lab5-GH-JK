// Rectangle.cpp
// ENSF 614 Fall 2021 Lab 5 Exercise B

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "CurveCut.h"
#include <iostream>
using namespace std;

CurveCut::CurveCut(double x, double y, double side_a, double side_b, double radius, const char *name) : Rectangle(x, y, side_a, side_b, name),
                                                                                                        Circle(x, y, radius, name),
                                                                                                        Shape(x, y, name)
{
    if (radius > side_a && radius > side_b)
    {
        cout << "Errpr: Radius must be smaller or equal than the rectangle sides";
        exit(1);
    }
}

double CurveCut::area()
{
    return (side_a * side_b) - ((3.14 * (radius * radius)) / 4);
}

double CurveCut::perimeter()
{
    return (side_a * 2) + (side_b * 2) - (radius * 2) + (3.14 * (radius + radius) / 4);
}

void CurveCut::display()
{
    cout << "CurveCut Name: " << getName() << "\n"
         << "X-coordinate: " << origin.get_x() << "\n"
         << "Y-coordinate: " << origin.get_y() << "\n"
         << "Width: " << get_side_a() << "\n"
         << "Length: " << get_side_b() << "\n"
         << "Radius of cut: " << get_radius() << endl;
}