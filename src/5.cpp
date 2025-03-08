// Math Calculator
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1 = 0; // first number for calculation
    int num2 = 0; // second number for calculation
    char op = ' '; // operation (+, -, *, /)

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: cannot divide by zero" << endl;
                return 0;
            }
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            return 0;
    }

    return 0;
}
