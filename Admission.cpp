
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double score;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Exam Score: ";
    cin >> score;

    cout << "\n--- Admission Result ---" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Age: " << age << endl;
    cout << "Score: " << score << endl;

    // Nested if - exactly as question wants
    if (age >= 18) {
        if (score >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}

