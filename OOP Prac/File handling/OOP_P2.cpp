#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    int num[][3] = {2822, 5, 837,
                    34, 7, 1623,
                    390, 3456, 12};

    fstream outFile("Table.txt", ios::out);

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            outFile << setw(8) << num[row][col];
        }
        outFile << endl;
    }
    outFile.close();
    cout << "Done" << endl;

    return 0;
}

