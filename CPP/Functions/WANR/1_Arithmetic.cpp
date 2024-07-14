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
  void addition(int a, int b) { cout << "\nThe addition is : " << a + b; }
  void subtraction(int a, int b) { cout << "\nThe subtraction is : " << a - b; }
  void multiplication(int a, int b) {
    cout << "\nThe multiplication is : " << a * b;
  }
  void division(int a, int b) { cout << "\nThe division is : " << a / b; }
  void modulo(int a, int b) { cout << "\nThe modulo is : " << a % b; }
} arth;

int main() {
  int i;
  cout << "\n-------------------Arithmetic Operators-------------------";
  int a = arth.userValue();
  int b = arth.userValue();
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) Addition";
  cout << "\n(2) Subtraction";
  cout << "\n(3) Multiplication";
  cout << "\n(4) Division";
  cout << "\n(5) Modulo";
  cout << "\nEnter your operation: ";
  cin >> i;

  switch (i) {
  case 1:
    arth.addition(a, b);
    break;
  case 2:
    arth.subtraction(a, b);
    break;
  case 3:
    arth.multiplication(a, b);
    break;
  case 4:
    arth.division(a, b);
    break;
  case 5:
    arth.modulo(a, b);
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}