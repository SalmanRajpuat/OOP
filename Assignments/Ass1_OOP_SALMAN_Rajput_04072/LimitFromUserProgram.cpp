#include <iostream>

using namespace std;

int main() {
    int n;
    bool validInput = false;

//Input Validation for charecter input
    while (!validInput) {
        cout << "Enter the number of integers to print: ";
        if (cin >> n) {
            validInput = true;
        } else {
            // Input case
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    // Printing integers 
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }

    return 0;
}
