#include <iostream>

using namespace std;

// Function template 
template <typename T>
T largest(T a, T b, T c) {
    if (a > b) {
        if (a > c) {
            return a; 
        } else {
            return c; 
        }
    } else {
        if (b > c) {
            return b; 
        } else {
            return c; 
        }
    }
}

int main() {
    int int1 = 5, int2 = 10, int3 = 7;
    double double1 = 5.5, double2 = 4.2, double3 = 6.1;
    char char1 = 'a', char2 = 'b', char3 = 'c';


    cout << "Largest of " << int1 << ", " << int2 << ", and " << int3 << " is " << largest(int1, int2, int3) << endl;

    
    cout << "Largest of " << double1 << ", " << double2 << ", and " << double3 << " is " << largest(double1, double2, double3) << endl;

    cout << "Largest of " << char1 << ", " << char2 << ", and " << char3 << " is " << largest(char1, char2, char3) << endl;

    return 0;
}

