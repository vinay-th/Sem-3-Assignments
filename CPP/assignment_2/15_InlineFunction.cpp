// 15. Write a C++ Program to find the cube of a number using Inline Function
#include <iostream>
using namespace std;

class Sum {
public:
  int sum2(int x, int y) { return x + y; }
} obj;

int main() {
  int sum = obj.sum2(5, 10);

  cout << "Addition of 5 + 10 = " << sum;

  cout << "\n";
  return 0;
}