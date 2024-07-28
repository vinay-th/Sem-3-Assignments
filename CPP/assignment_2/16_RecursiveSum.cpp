// 16. Write a C++ Program to find the sum of Numbers using Recursive Function
#include <iostream>
using namespace std;
class Calculate {
public:
  int sum(int a) {
    if (a <= 1) {
      return a;
    } else {
      return a + (a - 1);
    }
  }
};
int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  Calculate calc;
  cout << "Addition from 1 to " << num << " is " << calc.sum(num);

  cout << "\n";
  return 0;
}