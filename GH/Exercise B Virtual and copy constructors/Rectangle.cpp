#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;
#include <math.h>  
#include <cmath> 
#include <iomanip>
#include <string.h>
#include "Square.h"
#include "Rectangle.h"


Rectangle::Rectangle(double x, double y, double a, double b, const char* name):
    Square(x, y, a, name), Shape(x, y, name)
{
    side_b = b;
}

void Rectangle::display(){
    Shape::display();  // call parent display method
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
