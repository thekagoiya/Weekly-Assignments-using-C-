// CT101/ G/26620/25
#include <iostream>
#include <string>
using namespace std;

// Global variables to share data between functions
string empName;
double basicSalary;
double overtimeHours;
double ratePerHour = 500; // Ksh 500 per hour
double overtimePay;
double netSalary;

// i. Function to get details
void getEmployeeDetails() {
    cout << "=== Employee Details ===" << endl;
    cout << "Enter Employee Name: ";
    getline(cin, empName);
    
    cout << "Enter Basic Salary (Ksh): ";
    cin >> basicSalary;
    
    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;
}

// ii. Function to calculate overtime pay
double calculateOvertimePay() {
    overtimePay = overtimeHours * ratePerHour;
    return overtimePay;
}

// iii. Function to calculate net salary
double calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
    return netSalary;
}

// iv. Function to display payslip
void displayPayslip() {
    cout << "\n=====================================" << endl;
    cout << "          PAYSLIP                    " << endl;
    cout << "=====================================" << endl;
    cout << "Employee Name   : " << empName << endl;
    cout << "Basic Salary    : Ksh " << basicSalary << endl;
    cout << "Overtime Hours  : " << overtimeHours << " hrs" << endl;
    cout << "Rate Per Hour   : Ksh " << ratePerHour << endl;
    cout << "Overtime Pay    : Ksh " << overtimePay << endl;
    cout << "-------------------------------------" << endl;
    cout << "Net Salary      : Ksh " << netSalary << endl;
    cout << "=====================================" << endl;
}

// v. Main function
int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    return 0;
}
