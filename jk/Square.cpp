// Square.cpp
// ENSF 614 Fall 2021 Lab 5 Exercise B

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double x, double y, double side_a, const char *name) : Shape(x, y, name),
                                                                      side_a(side_a)
{
}

double Square::area()
{
    return side_a * side_a;
}

double Square::perimeter()
{
    return side_a * 4;
}

int Square::get_side_a()
{
    return side_a;
}

void Square::set_side_a(int new_side_a)
{
    side_a = new_side_a;
}

void Square::display()
{
    cout << "Square Name: " << getName() << "\n"
         << "X-coordinate: " << origin.get_x() << "\n"
         << "Y-coordinate: " << origin.get_y() << "\n"
         << "Side a: " << get_side_a() << "\n"
         << "Area: " << area() << "\n"
         << "Perimeter: " << perimeter() << endl;
}
