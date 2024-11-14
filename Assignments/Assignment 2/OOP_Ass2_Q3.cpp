#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string licencePlateNo;
    string modelNo;
    string type;
    string color;

public:
    // Parameterized constructor
    Vehicle(const string& plate, const string& model, const string& type, const string& color)
        : licencePlateNo(plate), modelNo(model), type(type), color(color) {}

    // Default constructor
    Vehicle() : licencePlateNo("NULL"), modelNo("NULL"), type("NULL"), color("NULL") {}

    // Setter methods
    void setLicencePlateNo(const string& plate) {
        licencePlateNo = plate;
    }

    void setModelNo(const string& model) {
        modelNo = model;
    }

    void setType(const string& type) {
        this->type = type;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    // Getter methods
    string getLicencePlateNo() const {
        return licencePlateNo;
    }

    string getModelNo() const {
        return modelNo;
    }

    string getType() const {
        return type;
    }

    string getColor() const {
        return color;
    }

    // Public member functions
    void RegisterVehicle() const {
        cout << "Vehicle registered successfully." << endl;
    }

    void UpdateVehicle() const {
        cout << "Vehicle details updated successfully." << endl;
    }

    void DeleteVehicle() const {
        cout << "Vehicle deleted successfully." << endl;
    }

    void ShowVehicleInfo() const {
        cout << "Vehicle Info: " << endl;
        cout << "Licence Plate No: " << licencePlateNo << endl;
        cout << "Model No: " << modelNo << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
    }
};

// Function to find a vehicle by licence plate number
int findVehicleIndex(const Vehicle vehicles[], int size, const string& plate) {
    for (int i = 0; i < size; ++i) {
        if (vehicles[i].getLicencePlateNo() == plate) {
            return i;
        }
    }
    return -1; // Vehicle not found
}

int main() {
    const int MAX_VEHICLES = 100;
    Vehicle vehicles[MAX_VEHICLES];
    int vehicleCount = 0;
    bool running = true;
    int choice;
    string plate, model, type, color;

    while (running) {
        cout << "\nVehicle Management System\n";
        cout << "1. Register Vehicle\n";
        cout << "2. Update Vehicle\n";
        cout << "3. Delete Vehicle\n";
        cout << "4. Search Vehicle or Show All Vehicles\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (vehicleCount < MAX_VEHICLES) {
                    cout << "Enter Licence Plate No: ";
                    cin >> plate;
                    cout << "Enter Model No: ";
                    cin >> model;
                    cout << "Enter Type: ";
                    cin >> type;
                    cout << "Enter Color: ";
                    cin >> color;
                    vehicles[vehicleCount++] = Vehicle(plate, model, type, color);
                    vehicles[vehicleCount - 1].RegisterVehicle();
                } else {
                    cout << "Vehicle storage is full." << endl;
                }
                break;

            case 2:
                cout << "Enter Licence Plate No of the vehicle to update: ";
                cin >> plate;
                {
                    int index = findVehicleIndex(vehicles, vehicleCount, plate);
                    if (index != -1) {
                        cout << "Enter new Model No: ";
                        cin >> model;
                        vehicles[index].setModelNo(model);
                        cout << "Enter new Type: ";
                        cin >> type;
                        vehicles[index].setType(type);
                        cout << "Enter new Color: ";
                        cin >> color;
                        vehicles[index].setColor(color);
                        vehicles[index].UpdateVehicle();
                    } else {
                        cout << "Vehicle not found." << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Licence Plate No of the vehicle to delete: ";
                cin >> plate;
                {
                    int index = findVehicleIndex(vehicles, vehicleCount, plate);
                    if (index != -1) {
                        vehicles[index].DeleteVehicle();
                        // Shift vehicles to remove the deleted vehicle
                        for (int i = index; i < vehicleCount - 1; ++i) {
                            vehicles[i] = vehicles[i + 1];
                        }
                        --vehicleCount;
                    } else {
                        cout << "Vehicle not found." << endl;
                    }
                }
                break;

            case 4:
                cout << "Enter Licence Plate No of the vehicle to search (or type 'all' to show all vehicles): ";
                cin >> plate;
                if (plate == "all") {
                    // Display all vehicles
                    cout << "All Registered Vehicles:" << endl;
                    for (int i = 0; i < vehicleCount; ++i) {
                        vehicles[i].ShowVehicleInfo();
                        cout << "-----------------------------" << endl;
                    }
                } else {
                    // Search for a specific vehicle
                    int index = findVehicleIndex(vehicles, vehicleCount, plate);
                    if (index != -1) {
                        vehicles[index].ShowVehicleInfo();
                    } else {
                        cout << "Vehicle not found." << endl;
                    }
                }
                break;

            case 5:
                running = false;
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                break;
        }
    }

    return 0;
}

