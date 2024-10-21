// 2. Write a program to take a two values from user and illustrate Division by
// Zero Exception.
#include <exception>
#include <iostream>

using namespace std;
int main() {
  int a, b;

  cout << "Enter the dividend: ";
  cin >> a;

  cout << "Enter the divisor: ";
  cin >> b;

  try {
    if (b == 0)
      throw 0;
    cout << "Division of " << a << " / " << b << " = " << a / b;

  } catch (int e) {
    cout << "Enter a valid number not -> " << e;
  }

  cout << "\n";
  return 0;
}