using namespace std;
#include <iostream>
#include <math.h>  
#include <cmath> 
#include <iomanip>

#include "Shape.h"
#include "Point.h"
#include <string.h>
#include "Circle.h"


Circle::Circle(double x, double y, double r, const char* name):
    Shape(x, y, name)
{
    radius = r;
}

void Circle::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nCircle Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
    cout << "Radius: " << setw(15) << get_radius() << endl;
    cout << "Area: " << setw(17) << area() << endl;
    cout << "Perimeter: "<< setw(12) << perimeter()  << endl;

}
Circle::Circle(const Circle& source):
    Shape(source)
{
    radius = source.get_radius();
}

Circle& Circle::operator =(Circle &rhs){
    if(this != &rhs){
        Shape::operator=(rhs);
        radius = rhs.get_radius();
    }
    return *this;
}
