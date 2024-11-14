#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Android {
private:
    double price;
    string company;
    string screenSize;
    string color; 

public:
    // Setter for price
    void setPrice(double p) {
        price = p;
    }

    double getPrice() const {
        return price;
    }

    // Setter for company
    void setCompany(const string& c) {
        company = c;
    }

    string getCompany() const {
        return company;
    }

    // Setter for screenSize
    void setScreenSize(const string& s) {
        screenSize = s;
    }

    string getScreenSize() const {
        return screenSize;
    }

    // Setter for color
    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }
};

// Function to input details for an Android object
void inputAndroidDetails(Android& android) {
    double price;
    string company;
    string screenSize;
    string color;

    cout << "Enter the price of the Android: ";
    cin >> price;
    cin.ignore(); // Clear newline character from input buffer

    cout << "Enter the company of the Android: ";
    getline(cin, company);

    cout << "Enter the screen size of the Android: ";
    getline(cin, screenSize);

    cout << "Enter the color of the Android: ";
    getline(cin, color);

    android.setPrice(price);
    android.setCompany(company);
    android.setScreenSize(screenSize);
    android.setColor(color);
}

// Function to display details of an Android object
void displayAndroidDetails(const Android& android) {
    cout << "\nAndroid Details:" << endl;
    cout << "Price: $" << android.getPrice() << endl;
    cout << "Company: " << android.getCompany() << endl;
    cout << "Screen Size: " << android.getScreenSize() << endl;
    cout << "Color: " << android.getColor() << endl;
}

int main() {
    vector<Android> androids;
    int numberOfAndroids;

    cout << "Enter the number of Android devices you want to input: ";
    cin >> numberOfAndroids;
    cin.ignore(); // Clear newline character from input buffer

    // Input details for each Android
    for (int i = 0; i < numberOfAndroids; ++i) {
        cout << "\nEntering details for Android #" << (i + 1) << endl;
        Android newAndroid;
        inputAndroidDetails(newAndroid);
        androids.push_back(newAndroid);
    }

    // Display details for each Android
    for (int i = 0; i < numberOfAndroids; ++i) {
        cout << "\nDetails of Android #" << (i + 1) << ":" << endl;
        displayAndroidDetails(androids[i]);
    }

    return 0;
}

