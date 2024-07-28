// 4. write a c++ program that declares and calls the function to perform
// various mathematical functions(Add, Subtract, Multiply, divide)
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int divide(int a, int b) {
  if (b != 0) {
    return a / b;
  } else {
    cout << "Error: Division by zero is not allowed." << endl;
    return 0;
  }
}

int main() {
  int a, b;

  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << "Addition: " << add(a, b) << endl;
  cout << "Subtraction: " << subtract(a, b) << endl;
  cout << "Multiplication: " << multiply(a, b) << endl;
  cout << "Division: " << divide(a, b) << endl;

  return 0;
}
