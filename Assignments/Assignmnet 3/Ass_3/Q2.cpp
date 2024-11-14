#include <iostream>
#include<string>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    //mutator functions
    void setLength(double);
    void setWidth(double);
    // accessor functions
    double getLength() const;
    double getWidth() const;
    //Membor function recArea()
    double recArea() const;
};

class Cuboid : public Rectangle {
private:
    double height;

public:

    // Mutator 
    void setHeight(double h);
    // Accessor method 
    double getHeight() const;
    //volume
    double cuboidArea() const;

};


// class Rectangle methods
void Rectangle::setLength(double val)
{
    length = val;
}


void Rectangle::setWidth(double val)
{
    width = val;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return length;
}
double Rectangle::recArea() const
{
    return	length * width;
}


//class Cuboid starts from here	
void Cuboid::setHeight(double h) {
    height = h;
}
double Cuboid::getHeight() const {
    return height;
}

double Cuboid::cuboidArea() const {
    return recArea() * height; // Cuboid Area = length * width * height
}

int main() {
    Cuboid obj1;
    cout << "Setting the object length:10cm, object width:5cm, object height:20cm \n";
    obj1.setLength(10);
    obj1.setWidth(5);
    obj1.setHeight(20);
    cout << "\nNow getting Data members value through get methods:\n";
    cout << "Object height is:" << obj1.getHeight() << endl;
    cout << "Object length is:" << obj1.getLength() << endl;
    cout << "Object width is:" << obj1.getWidth() << endl;
    cout << "\n\nArea of Rectangle is:" << obj1.recArea() << endl;
    cout << "Area of Cuboid is:" << obj1.cuboidArea() << endl;
}
