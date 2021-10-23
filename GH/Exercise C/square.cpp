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
    Shape::display();  // call parent display method
    cout << "Side a: " << setw(15) << get_side_a() << endl;
    cout << "Area: " << setw(17) << area() << endl;
    cout << "Perimeter: "<< setw(12) << perimeter()  << endl;

}

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


// int main(){
//     Square x(5, 7, 12, "SQUARE - S");
//     x.display();
//     return 0;
    
// }

