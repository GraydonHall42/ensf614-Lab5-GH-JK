/* File Name: Point.h
* Lab # and Assignment #: Lab #5
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-10-25
*/

#ifndef POINT
#define POINT

class Point{
private:
    double xcoordinate;
    double ycoordinate;
    int pointID;
    static int point_counter;  // counter for # of points created
    static int id_counter; // assign IDs to each point
public:
    Point(double x, double y);  
    ~Point(); 
    static double distance(const Point& m, const Point& n); 
    double distance(const Point &p);
    static int counter(){return point_counter;}
    void display();

    void setx(double value){xcoordinate=value;}
    void sety(double value){ycoordinate=value;}
    double getx() const{return xcoordinate;}
    double gety() const{return ycoordinate;}
    int getID() const{return pointID;}
    
};
    

#endif