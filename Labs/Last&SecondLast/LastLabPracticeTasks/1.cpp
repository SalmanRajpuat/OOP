#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to hold student information
struct Student {
    string name;
    int rollNo;
    float fee;
};

int main() {
    ifstream inFile("student.doc");


    if (!inFile) {
        cerr << "Error opening file student.doc" << endl;
        return 1;
    }

    Student student;

    while (inFile >> student.name >> student.rollNo >> student.fee) {
        cout << "Name: " << student.name << ", Roll No: " << student.rollNo << ", Fee: " << student.fee << endl;
    }

    inFile.close();

    return 0;
}

