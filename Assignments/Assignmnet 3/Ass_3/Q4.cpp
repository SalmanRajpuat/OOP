#include <iostream>
#include <string>
using namespace std;

// Base class
class Car {
protected:
    string carName;
    bool ignition;
    int currentSpeed;

public:
    // No-argument constructor
    Car();

    // Parameterized constructor
    Car(string name, bool ign, int speed);

    // Setter functions
    void setCarName(const string& name);
    void setIgnition(bool ign);
    void setCurrentSpeed(int speed);

    // Getter functions
    string getCarName() const;
    bool getIgnition() const;
    int getCurrentSpeed() const;

    // Function to set speed
    void setSpeed(int speed);
};

// Implementation of Car functions
Car::Car() :carName("Unknown"), ignition(false),currentSpeed(0) {}

Car::Car(string name, bool ign, int speed) : carName(name), ignition(ign), currentSpeed(speed) {}

void Car::setCarName(const string& name)
{
    carName = name;
}

void Car::setIgnition(bool ign)
{
    ignition = ign;
}

void Car::setCurrentSpeed(int speed) 
{
    currentSpeed = speed;
}


//getters from here
string Car::getCarName() const
{
    return carName;
}

bool Car::getIgnition() const
{
    return ignition;
}

int Car::getCurrentSpeed() const 
{
    return currentSpeed;
}

void Car::setSpeed(int speed) 
{
    currentSpeed = speed;
}

// Derived class
class Convertible : public Car
{
private:
    bool top;

public:
    // No-argument constructor
    Convertible();

    // Four-argument constructor
    Convertible(string name, bool ign, int speed, bool t);

    // Setter for top
    void setTop(bool t);

    // Function to display all attributes
    void show() const;
};

// Implementation of Convertible functions
Convertible::Convertible() : Car(), top(false) {}

Convertible::Convertible(string name, bool ign, int speed, bool t) : Car(name, ign, speed), top(t) {}

void Convertible::setTop(bool t) {
    top = t;
}

void Convertible::show() const {
    cout << "Car Name: " << getCarName() << endl;
    cout << "Ignition: " << (getIgnition() ? "On" : "Off") << endl;
    cout << "Current Speed: " << getCurrentSpeed() << " km/h" << endl;
    cout << "Top: " << (top ? "Down" : "Up") << endl;
}

int main() {
    // Creating an instance of Convertible
    Convertible myConvertible("Ford Mustang", true, 120, true);

    // Displaying attributes
    myConvertible.show();
    
    
    cout << "\n\nNow updating values:\n";
    // Testing setter functions
    myConvertible.setCarName("Fortuner");
    myConvertible.setIgnition(false);
    myConvertible.setCurrentSpeed(80);
    myConvertible.setTop(false);

    // Displaying 
    myConvertible.show();

    return 0;
}

