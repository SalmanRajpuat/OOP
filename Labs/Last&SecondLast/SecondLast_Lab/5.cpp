#include <iostream>

using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter(int c = 0) : count(c) {}

    // Overloading prefix increment operator (++)
    Counter& operator++() {
        ++count;  
        return *this;  
    }

    // Overloading postfix increment operator (++)
    Counter operator++(int) {
        Counter temp(*this);  
        ++count;             
        return temp;      
    }

    // Overloading prefix decrement operator (--)
    Counter& operator--() {
        --count;  
        return *this; 
    }

    // Overloading postfix decrement operator (--)
    Counter operator--(int) {
        Counter temp(*this);  
        --count;              
        return temp;          
    }

    // Method to display count
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;

    // Using prefix increment operator (++c1)
    ++c1;
    cout << "After prefix increment:" << endl;
    c1.display();

    // Using postfix increment operator (c1++)
    c1++;
    cout << "After postfix increment:" << endl;
    c1.display();

    // Using prefix decrement operator (--c1)
    --c1;
    cout << "After prefix decrement:" << endl;
    c1.display();

    // Using postfix decrement operator (c1--)
    c1--;
    cout << "After postfix decrement:" << endl;
    c1.display();

    return 0;
}

