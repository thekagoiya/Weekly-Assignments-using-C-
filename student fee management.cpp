
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    // Input student details
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Process fee payment
    void makePayment() {
        double payment;

        cout << "Enter payment amount: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance) {
            feeBalance -= payment;
            cout << "Payment successful.\n";
        }
        else {
            cout << "Invalid payment amount.\n";
        }
    }

    // Display student status
    void displayStatus() {
        cout << "\nSTUDENT FEE STATUS\n";
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student1;

    student1.inputStudent();
    student1.makePayment();
    student1.displayStatus();

    return 0;
}
