#include <iostream>
#include <algorithm> // for std::sort
#include <string>

using namespace std;

// Template class Queue
template <typename T>
class Queue {
private:
    T list[10];

public:
    
    Queue() {
        for (int i = 0; i < 10; ++i) {
            list[i] = T(); 
        }
    }

    // Function to sort the elements of the queue
    void sort() {
        std::sort(list, list + 10);
    }

    // Function to find the maximum 
    T max() {
        T maxValue = list[0];
        int count = 1; 

        for (int i = 1; i < 10; ++i) {
            if (list[i] > maxValue) {
                maxValue = list[i];
                count = 1; 
            } else if (list[i] == maxValue) {
                ++count; 
            }
        }

        cout << "Maximum value " << maxValue << " found " << count << " times.\n";
        return maxValue;
    }

    //Function to Find minimum
    T min() {
        T minValue = list[0];
        int count = 1; 

        for (int i = 1; i < 10; ++i) {
            if (list[i] < minValue) {
                minValue = list[i];
                count = 1; 
            } else if (list[i] == minValue) {
                ++count; 
            }
        }

        cout << "Minimum value " << minValue << " found " << count << " times.\n";
        return minValue;
    }

    
    void return_queue() {
        cout << "Queue elements:";
        for (int i = 0; i < 10; ++i) {
            cout << " " << list[i];
        }
        cout << endl;
    }
};

int main() {
    //  Queue objects with different data types
    Queue<int> intQueue;
    Queue<double> doubleQueue;
    Queue<string> stringQueue;

    cout << "Integer Queue:" << endl;
    intQueue.return_queue();
    cout << "Sorting integer Queue..." << endl;
    intQueue.sort();
    intQueue.return_queue();
    cout << "Maximum value in integer Queue: " << intQueue.max() << endl;
    cout << "Minimum value in integer Queue: " << intQueue.min() << endl;


    cout << "\nDouble Queue:" << endl;
    doubleQueue.return_queue();
    cout << "Sorting double Queue..." << endl;
    doubleQueue.sort();
    doubleQueue.return_queue();
    cout << "Maximum value in double Queue: " << doubleQueue.max() << endl;
    cout << "Minimum value in double Queue: " << doubleQueue.min() << endl;


    cout << "\nString Queue:" << endl;
    stringQueue.return_queue();
    
    
    stringQueue.return_queue();
    cout << "Maximum value in string Queue: " << stringQueue.max() << endl;
    cout << "Minimum value in string Queue: " << stringQueue.min() << endl;

    return 0;
}

