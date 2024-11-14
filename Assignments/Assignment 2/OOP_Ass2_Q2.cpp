#include <iostream>
#include <cmath>  // For sqrt
#include <iomanip> 

using namespace std;

class Quadrilateral {
private:
    double side1, side2, side3, side4;
    double angle1, angle2;

public:
    // Default Constructor
    Quadrilateral() : side1(0), side2(0), side3(0), side4(0), angle1(0), angle2(0) {}

    // Parameterized Constructor
    Quadrilateral(double s1, double s2, double s3, double s4, double a1, double a2)
        : side1(s1), side2(s2), side3(s3), side4(s4), angle1(a1), angle2(a2) {}

    // Setter methods
    void setSide1(double s1) {
        side1 = s1;
    }
    void setSide2(double s2) {
        side2 = s2;
    }
    void setSide3(double s3) {
        side3 = s3;
    }
    void setSide4(double s4) {
        side4 = s4;
    }
    void setAngle1(double a1) {
        angle1 = a1;
    }
    void setAngle2(double a2) {
        angle2 = a2;
    }



    // Getter methods
    double getSide1() const {
        return side1;
    }
    double getSide2() const {
        return side2;
    }
    double getSide3() const {
        return side3;
    }
    double getSide4() const {
        return side4;
    }

    double getAngle1() {
        return angle1;
    }
    double getAngle2() {
        double angle2;
    }


    //Perimeter being computed here
    double calculatePerimeter() {
        return side1 + side2 + side3 + side4;
    }

    // Method to compute the perimeter
    double calculatePerimeter() const {
        return side1 + side2 + side3 + side4;
    }

    // Method to compute the area 
    double calculateArea() const {
        double s = calculatePerimeter() / 2;
        double area = sqrt((s - side1) * (s - side2) * (s - side3) * (s - side4) -
            0.5 * side1 * side2 * side3 * side4 *
            (cos(angle1 * 3.14 / 180.0) * cos(angle2 * 3.14 / 180.0)));
        return area;
    }

    // Method to display all properties
    void display() const {
        cout << "Sides of the Quadrilateral: \n";
        cout << "Side 1: " << side1 << "\n";
        cout << "Side 2: " << side2 << "\n";
        cout << "Side 3: " << side3 << "\n";
        cout << "Side 4: " << side4 << "\n";
        cout << "Angles of the Quadrilateral: \n";
        cout << "Angle 1: " << angle1 << " degrees\n";
        cout << "Angle 2: " << angle2 << " degrees\n";
        cout << "Perimeter: " << calculatePerimeter() << "\n";
        cout << "Area: " << fixed << calculateArea() << "\n";
    }
};

int main() {
    Quadrilateral quad;

    // Initialization
    quad.setSide1(30);
    quad.setSide2(150);
    quad.setSide3(140);
    quad.setSide4(20);

    quad.setAngle1(80);
    quad.setAngle2(110);

    // Display the properties of the quadrilateral
    quad.display();

    return 0;
}

