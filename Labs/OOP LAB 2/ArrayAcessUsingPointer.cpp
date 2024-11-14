#include <iostream>
using namespace std;

int main() {
    //initialization of an array 
    int arr[] = {10, 20, 30};
    
   
    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptr = arr;
    cout << "Array elements using pointers:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element at index " << i << " is " << *(ptr + i) <<endl;
    }


    return 0;
}
