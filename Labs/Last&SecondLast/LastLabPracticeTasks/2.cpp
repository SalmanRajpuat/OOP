#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("output.txt");

    if (!outFile) {
        cerr << "Error opening output.txt for writing." << endl;
        return 1;
    }

    outFile << "Hello, this is a line written to the file.\n";
    outFile << "This is another line.\n";

    outFile.close();

    
    ifstream inFile("output.txt");

    if (!inFile) {
        cerr << "Error opening output.txt for reading." << endl;
        return 1;
    }

    string line;

   
    cout << "Contents of output.txt:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

   \
    inFile.close();

    return 0;
}

