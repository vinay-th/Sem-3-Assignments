// 12. Write a C++ program to check minimum and maximum of two numbers using
// Ternary operator
#include <iostream>
using namespace std;

class ternaryMinMax {
public:
  int a, b;
} obj;

int main() {
  cout << "Enter the first number: ";
  cin >> obj.a;

  cout << "Enter the second number: ";
  cin >> obj.b;

  int max = (obj.a > obj.b) ? obj.a : obj.b;
  int min = (obj.a < obj.b) ? obj.a : obj.b;

  cout << "\nThe maximum number is: " << max;
  cout << "\nThe minimum number is: " << min;

  cout << "\n";
  return 0;
}