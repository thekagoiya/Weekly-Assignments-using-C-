// CT101 / G/26620/25

#include <iostream>
using namespace std;

int main() {
    double balance = 10000; // Ksh 10,000 initial balance
    double withdrawal;

    cout << "=== Mobile Money Withdrawal System ===" << endl;
    cout << "Initial Balance: Ksh " << balance << endl;

    while (balance > 0) {
        cout << "\nEnter amount to withdraw (0 to exit): Ksh ";
        cin >> withdrawal;

        if (withdrawal == 0) {
            cout << "Transaction ended. Final balance: Ksh " << balance << endl;
            break;
        }

        if (withdrawal > balance) {
            cout << "Insufficient balance! Max you can withdraw: Ksh " << balance << endl;
        } else {
            balance -= withdrawal;
            cout << "Withdrawal successful. Remaining balance: Ksh " << balance << endl;
        }
    }

    if (balance == 0) {
        cout << "\nNo more funds. Please top up." << endl;
    }

    return 0;
}
