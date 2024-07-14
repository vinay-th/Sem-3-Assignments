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
  void addition() {
    int a = userValue();
    int b = userValue();

    cout << "\nThe addition is : " << a + b;
  }
  void subtraction() {
    int a = userValue();
    int b = userValue();

    cout << "\nThe subtraction is : " << a - b;
  }
  void multiplication() {
    int a = userValue();
    int b = userValue();

    cout << "\nThe multiplication is : " << a * b;
  }
  void division() {
    int a = userValue();
    int b = userValue();

    cout << "\nThe division is : " << a / b;
  }
  void modulo() {
    int a = userValue();
    int b = userValue();

    cout << "\nThe modulo is : " << a % b;
  }
} arth;

int main() {
  int i;
  cout << "\n-------------------Arithmetic Operators-------------------";
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
    arth.addition();
    break;
  case 2:
    arth.subtraction();
    break;
  case 3:
    arth.multiplication();
    break;
  case 4:
    arth.division();
    break;
  case 5:
    arth.modulo();
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}