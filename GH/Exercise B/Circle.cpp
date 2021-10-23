#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>
#include "Circle.h"


Circle::Circle(double x, double y, double r, const char* name):
    Shape(x, y, name)
{
    radius = r;
}

void Circle::display(){
    Shape::display();  // call parent display method
    cout << "Radius: " << setw(15) << get_radius() << endl;
    cout << "Area: " << setw(17) << area() << endl;
    cout << "Perimeter: "<< setw(12) << perimeter()  << endl;

}

Circle::Circle(const Circle& source):
    Shape(source.origin.getx(), source.origin.gety(), source.getName())
{
    radius = source.get_radius();
}

Circle& Circle::operator =(Circle&s){
    if(this != &s){
        delete [] shapeName;
        origin.setx(s.origin.getx());
        origin.sety(s.origin.gety());
        int len = strlen(s.getName());
        shapeName = new char[len];  // are we allowed to use this? 
        strcpy(shapeName, s.getName());
        radius = s.get_radius();
    }
}


// int main(){
//     Square x(5, 7, 12, "SQUARE - S");
//     x.display();
//     return 0;
    
// }

