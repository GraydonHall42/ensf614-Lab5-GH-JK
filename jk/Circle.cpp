// Square.cpp
// ENSF 614 Fall 2021 Lab 5 Exercise B

#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double x, double y, double radius, const char *name) : Shape(x, y, name),
                                                                      radius(radius)
{
}

double Circle::area()
{
    return 3.14 * (radius * radius);
}

double Circle::perimeter()
{
    return 3.14 * 2 * radius;
}

int Circle::get_radius()
{
    return radius;
}

void Circle::set_radius(int new_radius)
{
    radius = new_radius;
}

void Circle::display()
{
    cout << "Circle Name: " << getName() << "\n"
         << "X-coordinate: " << origin.get_x() << "\n"
         << "Y-coordinate: " << origin.get_y() << "\n"
         << "Radius: " << get_radius() << "\n"
         << "Area: " << area() << "\n"
         << "Perimeter: " << perimeter() << endl;
}
