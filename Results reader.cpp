
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Structure for student information
struct Student {
    char name[50];
    char registrationNumber[30];
    int totalMarks;
};

int main() {
    Student student;

    // Open binary file
    ifstream file("results.dat", ios::binary);

    if (!file) {
        cout << "Error opening results.dat\n";
        return 1;
    }

    cout << "\nSTUDENT EXAMINATION RESULTS\n";

    // Read and display student records
    while (file.read(
        reinterpret_cast<char*>(&student),
        sizeof(student))) {

        cout << "\nStudent Name: " << student.name << endl;
        cout << "Registration Number: "
             << student.registrationNumber << endl;

        cout << "Total Marks: "
             << student.totalMarks << endl;
    }

    // Close file
    file.close();

    return 0;
}
