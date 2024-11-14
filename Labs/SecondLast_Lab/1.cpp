#include <iostream>

using namespace std;

class Counter {
private:
    int count;

public:
    
    Counter() : count(0) {}

    
    Counter operator++(int) {
        Counter temp(*this);  
        count++;              
        return temp;          
    }

    
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;


	cout<<"Before increment:";
	c1.display();
	cout<<endl;
    // Callinf postfix increment operator
    c1++;  

    
    cout << "After increment:" << endl;
    c1.display();

    return 0;
}

