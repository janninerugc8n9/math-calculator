#include <iostream>
using namespace std;

int main() {
  float num1, num2, result;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  switch (get_operation()) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      cout << "Invalid operation. Try again." << endl;
      return 0;
  }

  cout << "The result of the operation is: " << result << endl;

  return 0;
}
