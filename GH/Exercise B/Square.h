/* File Name: Square.h
* Lab # and Assignment #: Lab #5
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-10-25
*/

#include "Point.h"
#include "Shape.h"

#ifndef SQUARE
#define SQUARE
class Square: virtual public Shape{

protected:
    double side_a;

public:
    Square(double x, double y, double side_a, const char* name);
    Square(const Square& source);
    Square& operator =(Square&rhs);
    
    void display();
    double area(){return side_a * side_a;}
    double perimeter(){return 4 * side_a;}
    
    void set_side_a(double value){side_a = value;}
    double get_side_a() const {return side_a;}

};


#endif