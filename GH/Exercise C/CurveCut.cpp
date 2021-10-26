/* File Name: CurveCut.cpp
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
#include <assert.h>

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "CurveCut.h"


CurveCut::CurveCut(double x, double y, double a, double b, double r, const char* name):
    Rectangle(x, y, a, b, name), Circle(x, y, r, name), Shape(x, y, name){
        if(r>a || r>b){
            cerr << "Error: Radius cannot be bigger than either of rectangle sides" << endl;
            exit(1);
        }
    }

double CurveCut::area(){
    return Rectangle::area() - 0.25*Circle::area();
}

double CurveCut::perimeter(){
    return Rectangle::perimeter() +  0.25*Circle::perimeter() - 2*radius;
}

// copy constructor
CurveCut::CurveCut(const CurveCut& source):
    Shape(source), Rectangle(source), Circle(source){
    
}

//overload equals sign
CurveCut& CurveCut::operator =(CurveCut&rhs){
    if(this != &rhs){
        Rectangle::operator=(rhs);
        Circle::operator=(rhs);
    }
    return *this;
}

void CurveCut::display(){ 
    cout << fixed;
    cout << setprecision(2);
    cout << "\nCurve Cut Name: " << shapeName << endl;
    cout << "X-coordinate: " << setw(9) << origin.getx() << endl;
    cout << "Y-coordinate: " << setw(9) << origin.gety() << endl;
    cout << "Side a: " << setw(15) << get_side_a() << endl;
    cout << "Side b: " << setw(15) << get_side_b() << endl;
    cout << "Cut Radius: "<< setw(11) << get_radius()  << endl;
}
