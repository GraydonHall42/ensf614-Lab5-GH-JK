using namespace std;
#include <iostream>
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>
#include "Shape.h"
#include "Point.h"



Shape::Shape(double x, double y, const char* name):origin(x,y){
    int len = strlen(name);
    shapeName = new char[len];
    strcpy(shapeName, name);

}

double Shape::distance (Shape& other){
    return origin.distance(other.origin);
}

double Shape::distance (Shape& the_shape, Shape& other){
    return Point::distance(the_shape.origin, other.origin);
}

void Shape::move (double dx, double dy){
    origin.setx(origin.getx()+dx);
    origin.sety(origin.gety()+dy);
}

// copy constructor
Shape::Shape(const Shape& source):
    origin(source.origin.getx(), source.origin.gety())
{
    int len = strlen(source.getName());
    shapeName = new char[len]; 
    strcpy(shapeName, source.getName());
}

// overload assignment operator
Shape& Shape::operator =(Shape&s){
    if(this!=&s){
        delete [] shapeName;
        origin.setx(s.origin.getx());
        origin.sety(s.origin.gety());
        int len = strlen(s.getName());
        shapeName = new char[len]; 
        strcpy(shapeName, s.getName());
    }
    return *this;
}

void Shape::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nShape Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
}

