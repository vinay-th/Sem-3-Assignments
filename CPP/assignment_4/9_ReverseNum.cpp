// 9. Write a program to display the reverse of a given number using template
// based function.
#include <iostream>
using namespace std;
template <typename T> T reverseIt(T val) {
  T rev = 0;
  T rem = 0;
  int base = 10;
  for (int i = val; i != 0; i /= base) {
    rem = i % base;
    rev = rev * base + rem;
  }
  return rev;
}
int main() {
  int a;
  cout << "Enter a number to reverse: ";
  cin >> a;

  cout << "The reverse of " << a << " is " << reverseIt(a);

  cout << "\n";
  return 0;
}