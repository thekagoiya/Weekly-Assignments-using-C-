//CT101 /26620/25


#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Declare variables
    string studentName;
    double marks;
    char grade;

    // Prompt user
    cout << "=== Secondary School Grading System ===" << endl;
    
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Exam Marks (0-100): ";
    cin >> marks;

    // ii. if-else ladder to assign grades
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    }
    else if (marks >= 0 && marks < 40) {
        grade = 'E';
    }
    else {
        cout << "Invalid marks! Marks should be between 0 and 100." << endl;
        return 0;
    }

    // iii. Display results
    cout << "\n--------------------------------" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Marks        : " << marks << endl;
    cout << "Grade        : " << grade << endl;
    cout << "--------------------------------" << endl;

    // Optional: Add comment
    if (grade == 'A') {
        cout << "Excellent!" << endl;
    } else if (grade == 'E') {
        cout << "Fail - Needs improvement." << endl;
    }

    return 0;
}

