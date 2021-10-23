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

// int main(){
//     Square x(5, 7, 12, "SQUARE - S");
//     x.display();
//     return 0;
    
// }

