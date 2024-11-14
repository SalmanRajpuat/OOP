#include <iostream>

using namespace std;

class Vector {
private:
    int x;
    int y;

public:
    // Constructor
    Vector(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    // Overloading binary + operator
    Vector operator+(const Vector& v) const {
        return Vector(x + v.x, y + v.y);
    }

    // Method to display vector
    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2(4, 1);

    // Adding vectors using overloaded operator +
    Vector result = v1 + v2;

    // Displaying the result
    v1.display();
    cout << " + ";
    v2.display();
    cout << " = ";
    result.display();
    cout << endl;

    return 0;
}

