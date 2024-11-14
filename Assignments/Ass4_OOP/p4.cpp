#include <iostream>
#include <string>
using namespace std;

class Automobile {
protected:
    double currentSpeed;

public:

    void setCurrentSpeed(double speed) {
        currentSpeed = speed;
    }

    double getCurrentSpeed() const {
        return currentSpeed;
    }
};

class Car : public Automobile {
protected:
    string color;

public:
    // Parameterized constructor
    Car(double speed, string& carColor)
    {
    	currentSpeed = speed;
    	color = carColor;
	}

    void setColor(string& carColor) {
        color = carColor;
    }

    string getColor() const {
        return color;
    }
};


class Limousine : public Car {
public:
    // Parameterized constructor
    Limousine(double speed, string carColor) : Car(speed, carColor) {}


//overRiding all these functions below
    void setCurrentSpeed(double speed) {
        Automobile::setCurrentSpeed(speed);
    }

    double getCurrentSpeed() const {
        return Automobile::getCurrentSpeed();
    }


    void setColor(string carColor) {
        Car::setColor(carColor);
    }

  
    string getColor() const {
        return Car::getColor();
    }
};

// Main function
int main() {
    
    Limousine limo(80.0, "Black");

    cout << "Current Speed: " << limo.getCurrentSpeed() << " km/h" << endl;
    cout << "Color: " << limo.getColor() << endl;

    // Modifying and displaying the details again
    limo.setCurrentSpeed(100.0);
    limo.setColor("Silver");
    cout << "\nUpdated Details:" << endl;
    cout << "Current Speed: " << limo.getCurrentSpeed() << " km/h" << endl;
    cout << "Color: " << limo.getColor() << endl;

    return 0;
}

