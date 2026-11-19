
#include <iostream>
using namespace std;

class Payment {
public:
    // Cash payment
    void processPayment(int amount) {
        cout << "Cash Payment: " << amount << endl;
    }

    // Card payment
    void processPayment(double amount, double fee) {
        double total = amount + fee;

        cout << "Card Payment: " << total << endl;
    }

    // Mobile payment
    void processPayment(double amount, double fee, double discount) {
        double total = amount + fee - discount;

        cout << "Mobile Payment: " << total << endl;
    }
};

int main() {
    Payment payment1;

    // Demonstrate function overloading
    payment1.processPayment(1000);

    payment1.processPayment(2000.0, 100.0);

    payment1.processPayment(3000.0, 100.0, 200.0);

    return 0;
}
