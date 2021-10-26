// Point.h
// ENSF 614 Lab 5 Exercise B

#ifndef POINT_H
#define POINT_H

#include <cmath>

class Point
{
public:
    Point(double x, double y);

    ~Point();

    void display();

    void setx(double x);

    void sety(double y);

    double get_x();

    double get_y();

    double get_id();

    static int counter() { return count; }

    double distance(Point &p);

    static double distance(Point &p1, Point &p2);

private:
    double x;
    double y;
    int id;
    // countTotal will be used for id assignment
    static int countTotal;
    // count will be used to keep track of current active objects
    static int count;
};

#endif