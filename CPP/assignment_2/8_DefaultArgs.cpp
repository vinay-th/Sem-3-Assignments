// 8. Write a C++ program to demonstrate the use of default arguments in
// function overloading
#include <iostream>
using namespace std;

class Patterns {
public:
  void printPattern(int n, char c = '*') {
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= i; ++j) {
        cout << c;
      }
      cout << endl;
    }
  }

  void printPattern(int n, char c, int spaces) {
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= spaces * (n - i); ++j) {
        cout << ' ';
      }
      for (int k = 1; k <= 2 * i - 1; ++k) {
        cout << c;
      }
      cout << endl;
    }
  }
};

int main() {
  Patterns obj;
  obj.printPattern(5);
  cout << endl;
  obj.printPattern(4, '#');
  cout << endl;
  obj.printPattern(3, '!', 2);
  return 0;
}
