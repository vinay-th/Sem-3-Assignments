// 8. Write a C++ program to find greatest number between 3 number using
// if-else-if statements.
#include <iostream>
using namespace std;

class Max {
public:
  int Maxof3(int a, int b, int c) {
    if (a >= b && a >= c) {
      return a;
    } else if (b >= c && b >= a) {
      return b;
    } else if (c >= a && c >= b) {
      return c;
    }
    return -1;
  }
};

int main() {
  int a, b, c;
  Max obj;

  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "Enter third number: ";
  cin >> c;

  int max = obj.Maxof3(a, b, c);

  cout << "Max of all number is: " << max;

  cout << "\n";
  return 0;
}