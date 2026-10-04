
#include <iostream>
#include <string>
using namespace std;

int main() {
    string empName;
    double basicSalary;
    double bonus;
    double totalSalary;

    cout << "=== Employee Bonus System ===" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEmployee " << i << endl;
        cout << "Enter Name: ";
        cin >> ws; // Fix: clears newline
        getline(cin, empName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "--- Report ---" << endl;
        cout << "Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}
