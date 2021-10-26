// Shape.cpp
// ENSF 614 Fall 2021 Lab 5 Exercise B

#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(double x, double y, const char *name) : origin(x, y)
{

    int j = 0;
    while (name[j] != '\0')
    {
        j++;
    }

    shapeName = new char[j + 1];
    for (int i = 0; i < j + 1; i++)
    {
        shapeName[i] = name[i];
    }
}

Shape::Shape(const Shape &shape) : origin(shape.origin)
{
    int j = 0;
    while (shape.shapeName[j] != '\0')
    {
        j++;
    }

    shapeName = new char[j + 1];
    for (int i = 0; i < j + 1; i++)
    {
        shapeName[i] = shape.shapeName[i];
    }
}

Shape::~Shape()
{
    delete[] shapeName;
    shapeName = nullptr;
}

double Shape::area()
{
    return 0;
}

double Shape::perimeter()
{
    return 0;
}

Point &Shape::getOrigin()
{
    return origin;
}

char *Shape::getName()
{
    return shapeName;
}

void Shape::display()
{
    cout << "Shape Name: " << getName() << "\n"
         << "X-coordinate: " << origin.get_x() << "\n"
         << "Y-coordinate: " << origin.get_y() << endl;
}

double Shape::distance(Shape &other)
{
    return origin.distance(other.origin);
}

double distance(Shape &the_shape, Shape &other)
{
    Point &p1 = the_shape.getOrigin();
    Point &p2 = other.getOrigin();

    double dist = Point::distance(p1, p2);
    return dist;
}

void Shape::move(double dx, double dy)
{
    origin.setx(origin.get_x() + dx);
    origin.sety(origin.get_y() + dy);
}