#include <iostream>

using namespace std;

void getValidatedInput(const string &prompt, int &value) {
    bool validInput = false;
    while (!validInput) {
        cout << prompt;
        if (cin >> value) {
            validInput = true;
        } else {
            // Invalid input case
            cout << "Invalid input. Please enter a valid integer." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}

int main() {
    int base1, exponent1, base2, exponent2, result;
    
    // Input for the first power number
    getValidatedInput("1st Power Number:\nBase = ", base1);
    getValidatedInput("Exponent = ", exponent1);
    
    // Input for the second power number
    getValidatedInput("2nd Power Number:\nBase = ", base2);
    getValidatedInput("Exponent = ", exponent2);
    
    if (base1 != base2) {
        cout << "The bases of the power numbers are not the same. Cannot compute the product." << endl;
        return 1;
    } else {
        result = exponent1 + exponent2;
    }
    
    // Display the result
    cout << "Result Base power = " << result << endl;
    
    return 0;
}

