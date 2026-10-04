// CT101/ G/26620/25
#include <iostream>
using namespace std;

int main() {
    // i. Declare variables
    double num1, num2;
    char op;
    double result;

    cout << "=== Ruiru Electronics Calculator ===" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;

    // ii. Switch statement
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
            break;
            
        case '-':
            result = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
            break;
            
        case '*':
            result = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
            break;
            
        case '/':
            // Handle division by zero
            if (num2 == 0) {
                cout << "\nError: Division by zero is not allowed!" << endl;
            } else {
                result = num1 / num2;
                cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
            
        default:
            cout << "\nError: Invalid operator! Use +, -, *, /" << endl;
            break;
    }

    return 0;
}

