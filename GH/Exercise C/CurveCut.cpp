// #include "Shape.h"
// #include "Point.h"
// #include <iostream>
// using namespace std;
// #include <math.h>  
// #include <cmath> 
// #include <iomanip>
// #include <string.h>
// #include "Square.h"
// #include "Rectangle.h"
// #include "CurveCut.h"


// CurveCut::CurveCut(double x, double y, double a, double b, double r, const char* name):
//     Rectangle(x, y, a, b, name), Circle(x, y, r, name), Shape(x, y, name){}

// void CurveCut::display(){
//     Shape::display();  // call parent display method
//     cout << "Side a: " << setw(15) << get_side_a() << endl;
//     cout << "Side b: " << setw(15) << get_side_b() << endl;
//     cout << "Area: " << setw(17) << area() << endl;
//     cout << "Perimeter: "<< setw(12) << perimeter()  << endl;

// }

// double CurveCut::area(){
//     return side_a*side_b - 0.25 * 3.14159265 * radius * radius;
// }

// double CurveCut::perimeter(){
//     return 2*side_a + 2*side_b
//             + 3.14159265 * 2 * radius * 0.25;
// }

