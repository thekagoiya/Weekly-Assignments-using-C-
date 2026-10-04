// CT101/ G/26620/25
#include <iostream>
#include <string>
using namespace std;

// Global variables
string customerName;
double unitsConsumed;
double ratePerUnit = 50; // Ksh 50 per unit
double totalBill;
double discount = 0;
double finalAmount;

// i. Get customer details
void getCustomerDetails() {
    cout << "=== Water Billing System ===" << endl;
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    
    cout << "Enter Units Consumed: ";
    cin >> unitsConsumed;
}

// ii. Calculate bill
double calculateBill() {
    totalBill = unitsConsumed * ratePerUnit;
    return totalBill;
}

// iii. Apply discount
double applyDiscount() {
    if (unitsConsumed > 100) {
        discount = totalBill * 0.10; // 10% discount
    } else {
        discount = 0;
    }
    finalAmount = totalBill - discount;
    return finalAmount;
}

// iv. Display bill
void displayBill() {
    cout << "\n=====================================" << endl;
    cout << "       WATER BILL RECEIPT            " << endl;
    cout << "=====================================" << endl;
    cout << "Customer Name       : " << customerName << endl;
    cout << "Units Consumed      : " << unitsConsumed << " units" << endl;
    cout << "Rate Per Unit       : Ksh " << ratePerUnit << endl;
    cout << "-------------------------------------" << endl;
    cout << "Total Bill          : Ksh " << totalBill << endl;
    cout << "Discount (10% >100) : Ksh " << discount << endl;
    cout << "-------------------------------------" << endl;
    cout << "Final Amount Payable: Ksh " << finalAmount << endl;
    cout << "=====================================" << endl;
}

// v. Main function
int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}

