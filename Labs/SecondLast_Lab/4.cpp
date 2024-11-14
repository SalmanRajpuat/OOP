#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    Fraction operator*(const Fraction& other) const {
        
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction frac1(3, 4);
    Fraction frac2(2, 5);

    
    Fraction result = frac1 * frac2;

    
    cout << "Result of ";
    frac1.display();
    cout << " * ";
    frac2.display();
    cout << " = ";
    result.display();
    cout << endl;

    return 0;
}

