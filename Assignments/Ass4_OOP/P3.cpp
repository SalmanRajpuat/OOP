#include <iostream>
#include <string>

using namespace std;

// Base class CafeService
class CafeService {
protected:
    string orderID;
    double price;

public:
    // No-argument constructor
    CafeService() : orderID("ord#0"), price(0.0) {}

    // Parameterized constructor
    CafeService(const string& id, double p) : orderID(id), price(p) {}

    
};

// Derived class StaffService
class StaffService : public CafeService {
private:
    double serviceFee;
    int cabinNumber;

public:
    StaffService(const string& id, double p, double fee, int cabin)
        : CafeService(id, p), serviceFee(fee), cabinNumber(cabin) {}

    // Function to calculate total charges
    double totalCharges() const {
        return price + serviceFee;
    }

   

    // Display function
    void display() const {
        cout << "Order ID: " << orderID << endl;
        cout << "Price: $" << price << endl;
        cout << "Service Fee: $" << serviceFee << endl;
        cout << "Cabin Number: " << cabinNumber << endl;
        cout << "Total Charges: $" << totalCharges() << endl;
    }
};

// Main function
int main() {
   
    StaffService service("ord#123", 50.0, 5.0, 12);
    service.display();

    return 0;
}

