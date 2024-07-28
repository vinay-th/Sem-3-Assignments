// 10. Write a C++ program that will ask user to input two numbers and check
// whether values are equal or not using assignment operator
#include <iostream>
using namespace std;

class checkNum {
public:
  void num2(int a, int b) {
    if (a == b) {
      cout << "Both the numbers are equal";
    } else {
      cout << "Both the numbers are not equal";
    }
  }
};

int main() {
  int a, b;

  checkNum obj;

  cout << "Enter the first number: ";
  cin >> a;

  cout << "Enter the second number: ";
  cin >> b;

  obj.num2(a, b);

  cout << "\n";
  return 0;
}