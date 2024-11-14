#include <iostream>

using namespace std;

// Function template to find the larger of two values
template <typename T>
T findLarger(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 5.5, double2 = 4.2;
    char char1 = 'a', char2 = 'b';

    // function template for integers
    cout << "Large between " << int1 << " and " << int2 << " is " << findLarger(int1, int2) << endl;

    //function template for doubles
    cout << "Large between " << double1 << " and " << double2 << " is " << findLarger(double1, double2) << endl;

    //function template for characters
    cout << "Large between " << char1 << " and " << char2 << " is " << findLarger(char1, char2) << endl;

    return 0;
}

