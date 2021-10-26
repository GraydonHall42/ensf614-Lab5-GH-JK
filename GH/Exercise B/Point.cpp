/* File Name: Point.cpp
* Lab # and Assignment #: Lab #5
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-10-25
*/

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

void Point::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nX-coordinate: " << setw(9) << xcoordinate << endl;
    cout << "Y-coordinate: " << setw(9) << ycoordinate << endl;
}

double Point::distance(const Point& m, const Point& n){
    // Pass m and n by reference to uneccesary destructor call for them
    return sqrt(pow(abs(m.getx() - n.getx()),2)+pow(abs(m.gety() - n.gety()),2));
}

double Point::distance(const Point &p){ 
    // Pass p by reference to uneccesary destructor call for it
    return sqrt(pow(abs(getx() - p.getx()),2)+pow(abs(gety() - p.gety()),2));
}

Point::~Point(){
    point_counter --;
}

