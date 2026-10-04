// CT101/ G/26620/25

#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Predefined credentials
    string correctUser = "admin";
    string correctPass = "1234";
    string user, pass;

    cout << "=== Login System ===" << endl;

    // ii. do-while loop
    do {
        cout << "Enter Username: ";
        cin >> user;
        cout << "Enter Password: ";
        cin >> pass;

        // iii. Check credentials
        if (user == correctUser && pass == correctPass) {
            cout << "Access Granted!" << endl;
            break; // exit loop
        } else {
            cout << "Incorrect credentials, try again." << endl;
        }
    } while (true); // loop forever until break

    return 0;
}


