#include <iostream>
using namespace std;


const int MAX_ELEMENTS = 101; // Represents integers 0 to 100

class IntegerSet {
private:
    bool elements[MAX_ELEMENTS]; // Array to represent set elements

public:
    // Default constructor initializes an empty set
    IntegerSet() {
        for (int i = 0; i < MAX_ELEMENTS; ++i) {
            elements[i] = false;
        }
    }

    // Constructor with array initialization
    IntegerSet(const int arr[], int size) {
        for (int i = 0; i < MAX_ELEMENTS; ++i) {
            elements[i] = false;
        }

        // Set elements to true if they exist in the array and are in range 0-100
        for (int i = 0; i < size; ++i) {
            if (arr[i] >= 0 && arr[i] <= 100) {
                elements[arr[i]] = true;
            }
        }
    }

    // Union operator (+)
    IntegerSet operator+(const IntegerSet& other) const {
        IntegerSet result;
        for (int i = 0; i < MAX_ELEMENTS; ++i) {
            result.elements[i] = (elements[i] || other.elements[i]);
        }
        return result;
    }

    // Intersection operator (*)
    IntegerSet operator*(const IntegerSet& other) const {
        IntegerSet result;
        for (int i = 0; i < MAX_ELEMENTS; ++i) {
            result.elements[i] = (elements[i] && other.elements[i]);
        }
        return result;
    }

    // Pre-decrement operator (--set)
    IntegerSet& operator--() {
        for (int i = MAX_ELEMENTS - 1; i >= 0; --i) {
            if (elements[i]) {
                elements[i] = false;
                break;
            }
        }
        return *this;
    }

    // Post-decrement operator (set--)
    IntegerSet operator--(int) {
        IntegerSet temp(*this); // Create a copy of the current object
        --(*this); // Use the pre-decrement operator
        return temp; // Return the copy of the original object
    }

    // Output operator (<<)
    friend std::ostream& operator<<(std::ostream& os, const IntegerSet& set) {
        os << "{ ";
        bool first = true;
        for (int i = 0; i < MAX_ELEMENTS; ++i) {
            if (set.elements[i]) {
                if (!first) {
                    os << ", ";
                }
                os << i;
                first = false;
            }
        }
        os << " }";
        return os;
    }

    // Equality operator (==)
    bool operator==(const IntegerSet& other) const {
        for (int i = 0; i < MAX_ELEMENTS; ++i) {
            if (elements[i] != other.elements[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
   

    // Test cases
    IntegerSet set1; // Empty set
    int arr2[] = { 1, 3, 5, 7, 9 };
    IntegerSet set2(arr2, sizeof(arr2) / sizeof(arr2[0])); // Initializing set with array
    int arr3[] = { 2, 4, 6, 8, 10 };
    IntegerSet set3(arr3, sizeof(arr3) / sizeof(arr3[0])); // Initializing another set with array

    cout << "set1: " << set1 << endl;
    cout << "set2: " << set2 << endl;
    cout << "set3: " << set3 << endl;

    // Test union operator (+)
    IntegerSet unionSet = set2 + set3;
    cout << "Union of set2 and set3: " << unionSet << endl;

    // Testing intersection operator (*)
    IntegerSet intersectSet = set2 * set3;
    cout << "Intersection of set2 and set3: " << intersectSet << endl;

    // Testing pre-decrement operator (--set)
    --set2;
    cout << "After pre-decrement of set2: " << set2 << endl;

    // Testing post-decrement operator (set--)
    IntegerSet postDecSet = set3--;
    cout << "Original set3: " << set3 << endl;
    cout << "Post-decremented set3: " << postDecSet << endl;

    // Testing equality operator (==)
    if (set2 == set3) {
        cout << "set2 and set3 are equal" << endl;
    }
    else {
        cout << "set2 and set3 are not equal" << endl;
    }

    return 0;
}

