
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    string employeeID;
    double basicSalary;

public:
    // Set employee details
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin, employeeName);

        cout << "Enter employee ID: ";
        getline(cin, employeeID);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    // Calculate net salary
    double calculateSalary() {
        double allowance = 0.10 * basicSalary;

        return basicSalary + allowance;
    }

    // Display employee details
    void displayEmployeeDetails() {
        cout << "\nEMPLOYEE DETAILS\n";
        cout << "Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee employee1;

    employee1.setEmployeeDetails();
    employee1.displayEmployeeDetails();

    return 0;
}
