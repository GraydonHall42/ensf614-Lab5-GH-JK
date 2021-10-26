/* File Name: Circle.h
* Lab # and Assignment #: Lab #5
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-10-25
*/

#include "Point.h"
#include "Shape.h"

#ifndef CIRCLE
#define CIRCLE

class Circle: virtual public Shape{

protected:
    double radius;

public:
    Circle(double x, double y, double r, const char* name);
    void display();
    double get_radius() const {return radius;}
    double area(){return 3.14159265 * radius * radius;}
    double perimeter(){return 3.14159265 * 2 * radius;}
    void set_radius(double value){radius = value;}
    Circle(const Circle& source);
    Circle& operator =(Circle&rhs);
};


#endif