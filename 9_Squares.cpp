// 9. Write a C++ Program to compute the square of number series till 10.
#include <cmath>
#include <iostream>

using namespace std;

class Squares {
public:
  void print10() {
    for (int i = 1; i <= 10; i++) {
      cout << "\nSquare of " << i << " is " << pow(i, 2);
    }
  }
};

int main() {

  Squares obj;
  obj.print10();

  cout << "\n";
  return 0;
}