// Rectangle.cpp
// ENSF 614 Fall 2021 Lab 5 Exercise B

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *name) : Square(x, y, side_a, name),
                                                                                           side_b(side_b)
{
}

double Rectangle::area()
{
    return side_a * side_b;
}

double Rectangle::perimeter()
{
    return (side_a * 2) + (side_b * 2);
}

double Rectangle::get_side_b()
{
    return side_b;
}

void Rectangle::set_side_b(double new_side_b)
{
    side_b = new_side_b;
}

void Rectangle::display()
{
    cout << "Square Name: " << getName() << "\n"
         << "X-coordinate: " << origin.get_x() << "\n"
         << "Y-coordinate: " << origin.get_y() << "\n"
         << "Side a: " << get_side_a() << "\n"
         << "Side b: " << get_side_b() << "\n"
         << "Area: " << area() << "\n"
         << "Perimeter: " << perimeter() << endl;
}