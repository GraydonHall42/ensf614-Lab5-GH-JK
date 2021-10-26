/* File Name: Rectangle.cpp
* Lab # and Assignment #: Lab #5
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-10-25
*/

using namespace std;
#include <iostream>
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>

#include "Square.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Point.h"


Rectangle::Rectangle(double x, double y, double a, double b, const char* name):
    Square(x, y, a, name), Shape(x, y, name)
{
    side_b = b;
}

void Rectangle::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nRectangle Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
    cout << "Side a: " << setw(15) << get_side_a() << endl;
    cout << "Side b: " << setw(15) << get_side_b() << endl;
    cout << "Area: " << setw(17) << area() << endl;
    cout << "Perimeter: "<< setw(12) << perimeter()  << endl;

}

Rectangle::Rectangle(const Rectangle& source):
    Square(source), Shape(source)
{
    side_b = source.get_side_b();
}

Rectangle& Rectangle::operator =(Rectangle&rhs){
    if(this != &rhs){
        Square::operator=(rhs);
        side_b = rhs.get_side_b();
    }
    return *this;
}
