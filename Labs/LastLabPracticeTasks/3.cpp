#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const int linesToRead = 5;
    string lines[linesToRead];

    cout << "Enter " << linesToRead << " lines of text:" << endl;
    for (int i = 0; i < linesToRead; ++i) {
        getline(cin, lines[i]);
    }

    ofstream outFile("NewFile.txt");

    if (!outFile) {
        cerr << "Error opening NewFile.txt for writing." << endl;
        return 1;
    }

    for (int i = 0; i < linesToRead; ++i) {
        outFile << lines[i] << endl;
    }

    outFile.close();
    cout << "Text successfully written to NewFile.txt" << endl;

    return 0;
}

