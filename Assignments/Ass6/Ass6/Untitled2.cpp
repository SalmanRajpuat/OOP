#include <iostream>

using namespace std;

class Money {
private:
    int Rupees;
    int Paisas;

public:
    // Parameterized constructor with default values
    Money(int rupees = 0, int paisas = 0) : Rupees(rupees), Paisas(paisas) {}

    // Overloading + operator to add two Money objects
    Money operator+(const Money& other) const {
        Money result;
        result.Rupees = Rupees + other.Rupees;
        result.Paisas = Paisas + other.Paisas;
        
        // Adjusting Paisas if it exceeds 100
        if (result.Paisas >= 100) {
            result.Rupees += result.Paisas / 100;
            result.Paisas %= 100;
        }
        
        return result;
    }

    // Overloading - operator to subtract two Money objects
    Money operator-(const Money& other) const {
        Money result;
        result.Rupees = Rupees - other.Rupees;
        result.Paisas = Paisas - other.Paisas;
        
        // Adjusting Paisas if it goes negative
        if (result.Paisas < 0) {
            result.Rupees -= 1;
            result.Paisas += 100;
        }
        
        return result;
    }

    // Overloading << operator for output
    friend ostream& operator<<(ostream& os, const Money& money) {
        os << "Rupees: " << money.Rupees << ", Paisas: " << money.Paisas;
        return os;
    }

    // Overloading >> operator for input
    friend istream& operator>>(istream& is, Money& money) {
        cout << "Enter Rupees: ";
        is >> money.Rupees;
        cout << "Enter Paisas: ";
        is >> money.Paisas;
        return is;
    }

    // Compare function
    int compare(const Money& other) const {
        if (Rupees < other.Rupees) {
            return -1;
        } else if (Rupees > other.Rupees) {
            return 1;
        } else {
            if (Paisas < other.Paisas) {
                return -1;
            } else if (Paisas > other.Paisas) {
                return 1;
            } else {
                return 0;
            }
        }
    }
};

int main() {
    Money m1, m2;

    // Input for m1 and m2
    cout << "Enter details for Money m1:" << endl;
    cin >> m1;

    cout << "Enter details for Money m2:" << endl;
    cin >> m2;

    // Addition
    Money sum = m1 + m2;
    cout << "Sum: " << sum << endl;

    // Subtraction
    Money diff = m1 - m2;
    cout << "Difference: " << diff << endl;

    // Comparison
    int result = m1.compare(m2);
    if (result < 0) {
        cout << "m1 is less than m2" << endl;
    } else if (result > 0) {
        cout << "m1 is greater than m2" << endl;
    } else {
        cout << "m1 is equal to m2" << endl;
    }

    return 0;
}

