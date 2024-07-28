#include <iostream>
using namespace std;

class Arithmetic {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  int addition(int a, int b) { return a + b; }
  int subtraction(int a, int b) { return a - b; }
  int multiplication(int a, int b) { return a * b; }
  int division(int a, int b) {
    if (b == 0) {
      cout << "Error: Division by zero!";
      return 0;
    }
    return a / b;
  }
  int modulo(int a, int b) {
    if (b == 0) {
      cout << "Error: Modulo by zero!";
      return 0;
    }
    return a % b;
  }
} arth;

int main() {
  int i;
  int a = arth.userValue();
  int b = arth.userValue();
  cout << "\n-------------------Arithmetic Operators-------------------";
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) Addition";
  cout << "\n(2) Subtraction";
  cout << "\n(3) Multiplication";
  cout << "\n(4) Division";
  cout << "\n(5) Modulo";
  cout << "\nEnter your operation: ";
  cin >> i;

  int result;
  switch (i) {
  case 1:
    result = arth.addition(a, b);
    cout << "\nThe addition is: " << result;
    break;
  case 2:
    result = arth.subtraction(a, b);
    cout << "\nThe subtraction is: " << result;
    break;
  case 3:
    result = arth.multiplication(a, b);
    cout << "\nThe multiplication is: " << result;
    break;
  case 4:
    result = arth.division(a, b);
    cout << "\nThe division is: " << result;
    break;
  case 5:
    result = arth.modulo(a, b);
    cout << "\nThe modulo is: " << result;
    break;
  default:
    cout << "\nInvalid operation!";
    break;
  }

  cout << "\n";
  return 0;
}