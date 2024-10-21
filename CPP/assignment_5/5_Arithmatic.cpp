// 5. Write a C++ program to perform arithmetic operations on two numbers and
// throw an exception if the dividend is zero or does not contain an operator.
#include <iostream>
using namespace std;
int main() {
  int a, b;

  cout << "Enter the 1st number: ";
  cin >> a;
  cout << "Enter the 2nd number: ";
  cin >> b;

  try {
    if (b == 0 && a == 0)
      throw 0;
    cout << "The result of the operation is: " << a / b;
  } catch (int e) {
    if (e == 0)
      cout << "Enter a valid number not -> " << e;
  }

  cout << "\n";
  return 0;
}