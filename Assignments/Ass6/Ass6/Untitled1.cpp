#include <iostream>

class Number {
private:
    int quantity;

public:
    // Constructor 
    Number(int quantity) : quantity(quantity) {}

    // Overloading >= operator to compare quantities
    bool operator>=(const Number& other) const {
        return quantity >= other.quantity;
    }

    // Overloading + operator to add quantities
    Number operator+(const Number& other) const {
        return Number(quantity + other.quantity);
    }

    // Overloading - operator to subtract quantities
    Number operator-(const Number& other) const {
        return Number(quantity - other.quantity);
    }

    // Overload == operator to check equality of quantities
    bool operator==(const Number& other) const {
        return quantity == other.quantity;
    }

    // Getter function 
    int getQuantity() const {
        return quantity;
    }
};

using namespace std;

int main() {
    
    Number item1(10);
    Number item2(5);

    cout<<"Inputs are 10 and 5\n";
    if (item1 >= item2) {
        Number result_quantity = item1 + item2 + item2 + item2;  
        cout << "Final result_quantity: " << result_quantity.getQuantity() << endl;
    } else {
        Number result_quantity = item1 - item2 - item2 - item2;  
        cout << "Final result_quantity: " << result_quantity.getQuantity() << endl;
    }

  
    if (item1 == item2) {
        cout << "They are equal" << endl;
    }

    return 0;
}

