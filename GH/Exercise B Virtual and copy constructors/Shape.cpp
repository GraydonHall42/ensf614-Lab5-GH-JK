#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>



Shape::Shape(double x, double y, const char* name):origin(x,y){
    int len = strlen(name);
    shapeName = new char[len];  // are we allowed to use this? 
    strcpy(shapeName, name);

}

void Shape::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nShape Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
}

double Shape::distance (Shape& other){
    return sqrt(pow(abs(origin.getx() - other.origin.getx()),2)
            +pow(abs(origin.gety() - other.origin.gety()),2));
}

double Shape::distance (Shape& the_shape, Shape& other){
    return sqrt(pow(abs(the_shape.origin.getx() - other.origin.getx()),2)
            +pow(abs(the_shape.origin.gety() - other.origin.gety()),2));
}

void Shape::move (double dx, double dy){
    origin.setx(origin.getx()+dx);
    origin.sety(origin.gety()+dy);
}

Shape::Shape(const Shape& source):
    origin(source.origin.getx(), source.origin.gety())
{
    int len = strlen(source.getName());
    shapeName = new char[len];  // are we allowed to use this? 
    strcpy(shapeName, source.getName());
}

Shape& Shape::operator =(Shape&s){
    if(this!=&s){
        delete [] shapeName;
        origin.setx(s.origin.getx());
        origin.sety(s.origin.gety());
        int len = strlen(s.getName());
        shapeName = new char[len];  // are we allowed to use this? 
        strcpy(shapeName, s.getName());
    }
    return *this;
}

// int main(){
//     Shape x (5, 7, "SHAPE - S");
//     x.display();
//     return 0;
    
// }

