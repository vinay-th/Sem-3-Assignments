// 2. Write a C++ Program to to add two numbers with use of template function.
#include <iostream>
using namespace std;
template <typename T> T sum(T a, T b) { return a + b; }
int main() {
  cout << "Sum of 5 + 10 = " << sum(5, 10);
  cout << "\n";
  cout << "Sum of 10.69 + 5.96 = " << sum(10.69, 5.96);

  cout << "\n";
  return 0;
}