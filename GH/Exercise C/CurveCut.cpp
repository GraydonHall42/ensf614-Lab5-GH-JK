
using namespace std;

#include <iostream>
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "CurveCut.h"


CurveCut::CurveCut(double x, double y, double a, double b, double r, const char* name):
    Rectangle(x, y, a, b, name), Circle(x, y, r, name), Shape(x, y, name){}

void CurveCut::display(){ 
    cout << fixed;
    cout << setprecision(2);
    cout << "\nCurve Cut Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
    cout << "Side a: " << setw(15) << get_side_a() << endl;
    cout << "Side b: " << setw(15) << get_side_b() << endl;
    cout << "Area: " << setw(17) << area() << endl;
    cout << "Perimeter: "<< setw(12) << perimeter()  << endl;
    cout << "Cut Radius: "<< setw(11) << get_radius()  << endl;

}

// IF I DEFINE THEM HERE AND NOT IN HEADER FILE I GET ERRORS :(
// double CurveCut::area(){
//     return Rectangle::area() - 0.25*Circle::area();
// }

// double CurveCut::perimeter(){
//     return Rectangle::area() -  0.25*Circle::perimeter() - 2*radius;
// }

CurveCut::CurveCut(const CurveCut& source):
    Shape(source), Rectangle(source), Circle(source)
{
}

// honestly not sure how to do this??????????????????????????????????????????????????????????????????????
CurveCut& CurveCut::operator =(CurveCut&rhs){
    if(this != &rhs){
        Shape::operator=(rhs);
        Rectangle::operator=(rhs);
        Circle::operator=(rhs);
    }
    return *this;
}
