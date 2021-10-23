#include "Point.h"
#include <iostream>
using namespace std;
#include <math.h>  
#include <cmath> 
#include <iomanip>

int Point::point_counter=0;
int Point::id_counter=1000;

Point::Point(double x, double y){
    xcoordinate = x;
    ycoordinate = y;
    point_counter++;
    id_counter++;
    pointID = id_counter;

}

void Point::setx(double value){
    xcoordinate = value;
}

void Point::sety(double value){
    ycoordinate = value;
}

double Point::getx() const{
    return xcoordinate;
}

double Point::gety() const{
    return ycoordinate;
}

int Point::getID() const{
    return pointID;
}

void Point::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nX-coordinate: " << setw(9) << xcoordinate << endl;
    cout << "Y-coordinate: " << setw(9) << ycoordinate << endl;
}

double Point::distance(Point p){
    return sqrt(pow(abs(getx() - p.getx()),2)+pow(abs(gety() - p.gety()),2));
}

double Point::distance(Point m, Point n){
    return sqrt(pow(abs(m.getx() - n.getx()),2)+pow(abs(m.gety() - n.gety()),2));
}

Point::~Point(){
    point_counter --;
}

// int main(){
//     Point m (6, 8);
//     Point n (6,8);
//     n.setx(9);
//     cout << "\nExpected to dispaly the distance between m and n is: 3";
//     cout << "\nThe distance between m and n is: " << m.distance(n);
//     cout << "\nExpected second version of the distance function also print: 3";
//     cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
//     n.display();
//     cout << "Point Id for M: " << m.getID() <<endl;
//     cout << "Point Id for N: " << n.getID()<<endl;
//     cout << "Number of points: " << Point::counter()<<endl;

//     // {
//     //     // add new point in here and destroy it
//     //     Point z (6,8);
//     //     cout << "Number of points after z created: " << Point::counter()<<endl; 
//     // }

//     // cout << "Number of points after z is destroyed: " << Point::counter()<<endl;
//     return 0;

// }

