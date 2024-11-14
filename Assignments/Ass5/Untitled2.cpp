#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string name;
    int age;
    string registrationNumber; // Assuming registration number is a string
};

// Function to write student information to file
void writeStudentInfo() {
    ofstream fout("student.txt", ios::app); // Append mode
    if (!fout) {
        cerr << "Error opening file 'student.txt' for appending.\n";
        return;
    }

    Student student;
    cin.ignore(); 
    cout << "Enter student name: ";
    getline(cin, student.name);
    cout << "Enter student age: ";
    cin >> student.age;
    cin.ignore(); 
    cout << "Enter student registration number: ";
    getline(cin, student.registrationNumber);

    fout << student.name << "," << student.age << "," << student.registrationNumber << endl;

    cout << "Student information written to file successfully.\n";
    fout.close();
}

// Function to search for a student by name
void searchByName(const string& name) {
    ifstream fin("student.txt");
    if (!fin) {
        cerr << "Error opening file 'student.txt' for reading.\n";
        return;
    }

    string line;
    bool found = false;
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        string student_name = line.substr(0, pos1);
        if (student_name == name) {
            size_t pos2 = line.find(",", pos1 + 1);
            int age = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
            string regNum = line.substr(pos2 + 1);
            cout << "Student found:\n";
            cout << "Name: " << student_name << endl;
            cout << "Age: " << age << endl;
            cout << "Registration Number: " << regNum << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with name '" << name << "' not found.\n";
    }

    fin.close();
}

// Function to search for a student by age
void searchByAge(int age) {
    ifstream fin("student.txt");
    if (!fin) {
        cerr << "Error opening file 'student.txt' for reading.\n";
        return;
    }

    string line;
    bool found = false;
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        string student_name = line.substr(0, pos1);
        size_t pos2 = line.find(",", pos1 + 1);
        int student_age = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        if (student_age == age) {
            string regNum = line.substr(pos2 + 1);
            cout << "Student found:\n";
            cout << "Name: " << student_name << endl;
            cout << "Age: " << student_age << endl;
            cout << "Registration Number: " << regNum << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with age '" << age << "' not found.\n";
    }

    fin.close();
}

// Function to search for a student by registration number
void searchByRegistrationNumber(const string& regNum) {
    ifstream fin("student.txt");
    if (!fin) {
        cerr << "Error opening file 'student.txt' for reading.\n";
        return;
    }

    string line;
    bool found = false;
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        string student_name = line.substr(0, pos1);
        size_t pos2 = line.find(",", pos1 + 1);
        int age = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        string student_regNum = line.substr(pos2 + 1);
        if (student_regNum == regNum) {
            cout << "Student found:\n";
            cout << "Name: " << student_name << endl;
            cout << "Age: " << age << endl;
            cout << "Registration Number: " << student_regNum << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with registration number '" << regNum << "' not found.\n";
    }

    fin.close();
}

// Main here
int main() {
    int choice;
    string name;
    int age;
    string regNum;

    do {
        cout << "\nOptions:\n";
        cout << "1. Write student information to file\n";
        cout << "2. Search student by name\n";
        cout << "3. Search student by age\n";
        cout << "4. Search student by registration number\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            writeStudentInfo();
            break;
        case 2:
            cout << "Enter student name to search: ";
            cin.ignore();
            getline(cin, name);
            searchByName(name);
            break;
        case 3:
            cout << "Enter student age to search: ";
            cin >> age;
            searchByAge(age);
            break;
        case 4:
            cout << "Enter student registration number to search: ";
            cin.ignore();
            getline(cin, regNum);
            searchByRegistrationNumber(regNum);
            break;
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter again.\n";
        }
    } while (choice != 5);

    return 0;
}

