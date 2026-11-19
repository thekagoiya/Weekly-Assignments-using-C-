
#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class MedicalStaff {
protected:
    string staffName;
    string staffID;

public:
    void inputDetails() {
        cout << "Enter staff name: ";
        getline(cin, staffName);

        cout << "Enter staff ID: ";
        getline(cin, staffID);
    }

    // Pure virtual function
    virtual double calculateSalary() = 0;

    // Non-virtual function
    void displayDetails() {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }

    virtual ~MedicalStaff() {}
};

// Derived class Doctor
class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    void inputDoctor() {
        inputDetails();

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        cout << "Enter allowance: ";
        cin >> allowance;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

// Derived class Nurse
class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    void inputNurse() {
        inputDetails();

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        cout << "Enter overtime pay: ";
        cin >> overtimePay;
    }

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    Doctor doctor1;
    Nurse nurse1;

    cout << "DOCTOR DETAILS\n";
    doctor1.inputDoctor();

    cout << "\nNURSE DETAILS\n";
    cin.ignore();
    nurse1.inputNurse();

    // Base class pointers
    MedicalStaff* ptr;

    cout << "\nDOCTOR PAYSLIP\n";
    ptr = &doctor1;
    ptr->displayDetails();
    cout << "Doctor Salary: " << ptr->calculateSalary() << endl;

    cout << "\nNURSE PAYSLIP\n";
    ptr = &nurse1;
    ptr->displayDetails();
    cout << "Nurse Salary: " << ptr->calculateSalary() << endl;

    return 0;
}
