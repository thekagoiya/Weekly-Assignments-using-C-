
#include <iostream>
using namespace std;

float calculateBill(float units) {
    float bill = 0;
    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    return bill;
}

int main() {
    float units;
    cout << "Enter total units consumed: ";
    cin >> units;

    float result = calculateBill(units);
    
    cout << "Total bill is: Ksh " << result << endl;
    
    return 0;
}

