#include <iostream>
#include <string>

using namespace std;

// Base class Company
class Company {
protected:  // protected to allow derived classes access
    int companyID;
    string companyName;

public:
    // constructor
    Company(int ID, const string& name) : companyID(ID), companyName(name) {}

    // Setters
    void setCompanyID(int id) { companyID = id; }
    void setCompanyName(const string& name) { companyName = name; }

    // Getters
    int getID() const { return companyID; }
    string getCompanyName() const { return companyName; }
};

// Derived class MobilePhone
class MobilePhone : public Company {
private:
    string mobilePhoneName;
    int mobileID;
    int mobilePrice;

public:
    // Constructor
    MobilePhone(int id, const string& companyName, const string& phoneName, int phoneID, int price)
        : Company(id, companyName), mobilePhoneName(phoneName), mobileID(phoneID), mobilePrice(price) {}

    // Setters
    void setMobilePhoneName(const string& name) { mobilePhoneName = name; }
    void setMobileID(int id) { mobileID = id; }
    void setMobilePrice(int price) { mobilePrice = price; }

    // Getters
    string getMobilePhoneName() const { return mobilePhoneName; }
    int getMobileID() const { return mobileID; }
    int getMobilePrice() const { return mobilePrice; }

    // Display function implementation
    void display() const {
        cout << "Company ID: " << companyID << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Mobile Phone Name: " << mobilePhoneName << endl;
        cout << "Mobile ID: " << mobileID << endl;
        cout << "Mobile Price: $" << mobilePrice << endl;
    }
};

// Derived class Laptop
class Laptop : public Company {
private:
    string laptopName; // Data member to hold the laptop name

public:
    // Constructor
    Laptop(int id, const string& companyName, const string& name)
        : Company(id, companyName), laptopName(name) {}

    // Setter
    void setLaptopName(const string& name) { laptopName = name; }

    // Getter
    string getLaptopName() const { return laptopName; }

    // Display function implementation
    void display() const {
        cout << "Company ID: " << companyID << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Laptop Name: " << laptopName << endl;
    }
};

// Main function
int main() {
    
    MobilePhone phone(1, "TechCorp", "Samsung Galaxy", 12345, 999);
    Laptop laptop(2, "CompuTech", "MacBook Pro");
    cout << "Mobile Phone Details:" << endl;
    
    //so the advantage of using protected is that we can access private variables of base class directly 
    phone.display();

    // Display details for Laptop
    cout << "\nLaptop Details:" << endl;
    
    //so the advantage of using protected is that we can access private variables of base class directly 
    laptop.display();

    return 0;
}

