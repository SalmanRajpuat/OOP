#include <iostream>
using namespace std;

class ArithmeticSeries {
private:
    int firstEntry;   
    int lastEntry;  
    int n;    // Total number of terms
    int sum;  // Sum of the series

public:
    // Constructor to initialize the series
    ArithmeticSeries(int first, int last, int terms);

    friend void computeSum(ArithmeticSeries &series);

    void displaySum() const;
};

// Constructor implementation
ArithmeticSeries::ArithmeticSeries(int first, int last, int terms)
    : firstEntry(first), lastEntry(last), n(terms), sum(0) {}

// Friend function 
void computeSum(ArithmeticSeries &series) {
    series.sum = (series.n / 2.0) * (series.firstEntry + series.lastEntry);
}

// Function to display the sum
void ArithmeticSeries::displaySum() const {
    cout << "Sum of the series: " << sum << endl;
}

int main() {
    //instance of ArithmeticSeries
    ArithmeticSeries series(2, 20, 10);
    computeSum(series);
    series.displaySum();

    return 0;
}

