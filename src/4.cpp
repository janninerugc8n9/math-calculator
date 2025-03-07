#include <iostream>

int main() {
    int num1, num2;
    char op;

    std::cout << "Enter two numbers and an operator (+, -, *, /): ";
    std::cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: division by zero is undefined." << std::endl;
                break;
            }
            std::cout << num1 / num2 << std::endl;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
    }

    return 0;
}
