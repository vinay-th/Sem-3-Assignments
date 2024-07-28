// 1. write a c+ program to calculate factorial numbers using Recursion.
#include <iostream>
using namespace std;

class Factorial {
public:
  int facto(int a) {
    if (a <= 1) {
      return 1;
    } else {
      return a * facto(a - 1);
    }
  }
};

int main() {
  Factorial obj;
  int a;

  cout << "Enter a number to find it's factorial: ";
  cin >> a;

  cout << "\n\nThe factorial for " << a << " is " << obj.facto(a);

  cout << "\n";
  return 0;
}