#include <iostream>

using namespace std;

class Counter {
private:
    int count;

public:
    
    Counter() : count(0) {}

    // Prefix decrement operator overloading
    Counter& operator--() {
        --count;  
        return *this;  
    }

    // Postfix decrement operator overloading
    Counter operator--(int) {
        Counter temp(*this);  
        count--;              
        return temp;          
    }

    
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;

   cout<<"Before Decrement:";
   c1.display();
   cout<<endl;
    --c1;  

    // Display count after prefix decrement
    cout << "After prefix decrement:" << endl;
    c1.display();

    // Postfix decrement operator
    c1--;  // This is equivalent to c1.operator--(0)

    // Display count after postfix decrement
    cout << "After postfix decrement:" << endl;
    c1.display();

    return 0;
}

