#ifndef POINT
#define POINT

class Point{
private:
    double xcoordinate;
    double ycoordinate;
    int pointID;
    static int point_counter;  // counter for # of points created
    static int id_counter;
public:
    Point(double x, double y);
    static int counter(){return point_counter;}
    void setx(double value);
    void sety(double value);
    double getx() const;
    double gety() const;
    int getID() const;
    double distance(Point p);
    static double distance(Point m, Point n);
    void display();
    ~Point();

};
    

#endif