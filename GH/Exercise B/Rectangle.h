/* File Name: Rectangle.h
* Lab # and Assignment #: Lab #5
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-10-25
*/

#include "Point.h"
#include "Shape.h"
#include "Square.h"

#ifndef RECTANGLE
#define RECTANGLE
class Rectangle: public Square{

protected:
    double side_b;

public:
    Rectangle(double x, double y, double a, double b, const char* name);
    void display();
    double get_side_b() const{return side_b;}
    double area(){return side_a * side_b;}
    double perimeter(){return 2 * side_a + 2*side_b;}
    void set_side_b(double value){side_b = value;}
    Rectangle(const Rectangle& source);
    Rectangle& operator =(Rectangle&rhs);
};


#endif