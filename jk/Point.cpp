// Point.cpp
// ENSF 614 Fall 2021 Lab 5 Exercise B

#include "Point.h"
#include <math.h>

int Point::count = 0;

Point::Point(double pt_x, double pt_y) : x(pt_x), y(pt_y)
{
    count++;
    id = 1000 + count;
}

void display();

void Point::setx(double new_x)
{
    x = new_x;
}

void Point::sety(double new_y)
{
    y = new_y;
}

double Point::get_x()
{
    return x;
}

double Point::get_y()
{
    return y;
}

double Point::get_id()
{
    return id;
}

double Point::distance(Point &p)
{
    double x_dist = get_x() - p.get_x();
    double y_dist = get_y() - p.get_y();
    return sqrt(pow(x_dist, 2.0) + pow(y_dist, 2.0));
}

double Point::distance(Point &p1, Point &p2)
{
    double x_dist = p1.get_x() - p2.get_x();
    double y_dist = p1.get_y() - p2.get_y();
    return sqrt(pow(x_dist, 2.0) + pow(y_dist, 2.0));
}
