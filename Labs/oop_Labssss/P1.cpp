#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


double max(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 5.5, double2 = 4.2;

    
    cout << "Larger of " << int1 << " and " << int2 << " is " << max(int1, int2) << endl;

    // Calling the overloaded function for doubles
    cout << "Larger of " << double1 << " and " << double2 << " is " << max(double1, double2) << endl;

    return 0;
}

