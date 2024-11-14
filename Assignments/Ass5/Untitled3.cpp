#include <iostream>

using namespace std;

// Template class Calculator
template <typename T>
class Calculator {
private:
    T num1;
    T num2;

public:
    // Parameterized constructor
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to perform addition
    T addition() {
        return num1 + num2;
    }

    // Function to perform subtraction
    T subtraction() {
        return num1 - num2;
    }

    // Function to perform multiplication
    T multiplication() {
        return num1 * num2;
    }

    // Function to perform division
    double division() {
        if (num2 != 0) {
            return static_cast<double>(num1) / num2;
        }
        else {
            cout << "Error: Division by zero\n";
            return 0;
        }
    }
};

int main() {
    
    Calculator<int> intCalc(20, 5);

    cout << "Integer Calculator Results:" << endl;
    cout << "Addition: " << intCalc.addition() << endl;
    cout << "Subtraction: " << intCalc.subtraction() << endl;
    cout << "Multiplication: " << intCalc.multiplication() << endl;
    cout << "Division: " << intCalc.division() << endl;

    Calculator<float> floatCalc(15.5f, 3.2f);

    cout << "\nFloat Calculator Results:" << endl;
    cout << "Addition: " << floatCalc.addition() << endl;
    cout << "Subtraction: " << floatCalc.subtraction() << endl;
    cout << "Multiplication: " << floatCalc.multiplication() << endl;
    cout << "Division: " << floatCalc.division() << endl;

    return 0;
}

