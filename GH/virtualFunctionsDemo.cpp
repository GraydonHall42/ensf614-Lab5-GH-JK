#include <iostream>
class Animals
{
    char name[20];
public:
    virtual display() = 0;
};

class Fish :public Animal
{
    char color[20];
public:
    display(){
        cout<<"this is a fish";
    }
}