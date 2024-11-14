#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double hoursWorked, hourlyRate, regularPay, overtimePay, totalPay;
    const double OVERTIME_RATE = 1.30;
    bool validInput = false;

    // Input hours worked with input validation
    while (!validInput) {
        cout << "Enter hours worked: ";
        if (cin >> hoursWorked && hoursWorked >= 0) {
            validInput = true;
        } else {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a valid number for hours worked." << endl;
        }
    }

    validInput = false; // Reseting validInput for the next input

    // Input pay rate with input validation
    while (!validInput) {
        cout << "Enter pay rate: ";
        if (cin >> hourlyRate && hourlyRate >= 0) {
            validInput = true;
        } else {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a valid number for pay rate." << endl;
        }
    }

    // Computing pay
    if (hoursWorked > 40) {
        // regular pay 
        regularPay = 40 * hourlyRate;

        //overtime pay 
        double overtimeHours = hoursWorked - 40;
        overtimePay = overtimeHours * hourlyRate * OVERTIME_RATE;
    } else {
        regularPay = hoursWorked * hourlyRate;
        overtimePay = 0.0;
    }

    // Computing total pay
    totalPay = regularPay + overtimePay;

    cout << "Regular pay = " << regularPay << endl;
    cout << "Overtime pay = " << overtimePay << endl;
    cout << "Total pay = " << totalPay << endl;

    return 0;
}

