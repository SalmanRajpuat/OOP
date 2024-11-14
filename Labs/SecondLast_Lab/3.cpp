#include <iostream>
#include <cstring> // For strcmp function

using namespace std;

class MyString {
private:
    char* str;

public:
    // Constructor
    MyString(const char* s = nullptr) {
        if (s == nullptr) {
            str = new char[1];
            str[0] = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Copy constructor
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Overloading assignment operator
    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Overloading equality operator (==)
    bool operator==(const MyString& other) const {
        return strcmp(str, other.str) == 0;
    }

    // Getter function to access private member str
    const char* getStr() const {
        return str;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("Hello");
    MyString str3("World");

    // Using the overloaded equality operator to check equality
    if (str1 == str2) {
        cout << str1.getStr() << " and " << str2.getStr() << " are equal." << endl;
    } else {
        cout << str1.getStr() << " and " << str2.getStr() << " are not equal." << endl;
    }

    if (str1 == str3) {
        cout << str1.getStr() << " and " << str3.getStr() << " are equal." << endl;
    } else {
        cout << str1.getStr() << " and " << str3.getStr() << " are not equal." << endl;
    }

    return 0;
}

