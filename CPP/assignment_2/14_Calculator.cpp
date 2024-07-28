// 14. Write a C++ Program to generate a simple calculator using constructor.
#include <iostream>
using namespace std;

class Calculator {
public:
  Calculator(int a, int b, char opr) {
    switch (opr) {
    case '+':
      cout << "\nThe addition of " << a << " + " << b << " = " << a + b;
      break;
    case '-':
      cout << "\nThe subtraction of " << a << " - " << b << " = " << a - b;
      break;
    case '*':
      cout << "\nThe multiplication of " << a << " * " << b << " = " << a * b;
      break;
    case '/':
      cout << "\nThe division of " << a << " / " << b << " = " << a / b;
      break;

    default:
      cout << "\nSomething was wrong";
      break;
    }
  }
};

int main() {
  int x, y;
  cout << "\n-------------This is a simple calculator-------------\n\n";
  char opr;

  cout << "\nEnter your operation -->\n";
  cout << "\nAddition (+)";
  cout << "\nSubtraction (-)";
  cout << "\nMultiplication (*)";
  cout << "\nDivision (/)\n";
  cout << "\nEnter operation: ";
  cin >> opr;

  cout << "\nEnter first number: ";
  cin >> x;
  cout << "\nEnter second number: ";
  cin >> y;

  Calculator calculate(x, y, opr);

  cout << "\n";
  return 0;
}