#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>
#include "Square.h"


Square::Square(double x, double y, double a, const char* name):
    Shape(x, y, name)
{
    side_a = a;
}

void Square::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nSquare Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
    cout << "Side a: " << setw(15) << get_side_a() << endl;
    cout << "Area: " << setw(17) << area() << endl;
    cout << "Perimeter: "<< setw(12) << perimeter()  << endl;
}

// copy constructor
Square::Square(const Square& source):
    Shape(source)
{
    side_a = source.get_side_a();
}

Square& Square::operator =(Square&rhs){
    if(this != &rhs){
        Shape::operator=(rhs);
        side_a = rhs.get_side_a();
    }
    return *this;
}


