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
    Square(x, y, a, name)
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
    Square(source.origin.getx(), source.origin.gety(), 
    source.get_side_a() ,source.getName())
{
    side_b = source.get_side_b();
}

Rectangle& Rectangle::operator =(Rectangle&s){
    if(this != &s){
        delete [] shapeName;
        origin.setx(s.origin.getx());
        origin.sety(s.origin.gety());
        int len = strlen(s.getName());
        shapeName = new char[len];  // are we allowed to use this? 
        strcpy(shapeName, s.getName());
        side_a = s.side_a;
        side_b = s.side_b;
    }
}

// int main(){
//     Rectangle r(5, 7, 2, 3, "RECCY - S");
//     // Point xx = x.getOrigin();
//     // cout<< "X name: " << x.getName() << endl;
//     // x.display();
//     // x.move(1,1);
//     // cout << "X after move: " << endl;
//     r.display();
//     return 0;
    
// }

