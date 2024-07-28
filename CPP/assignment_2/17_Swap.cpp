// 17. Write a c++ Program to swap two numbers using Function.
#include <iostream>
using namespace std;

class Swap {
public:
  int userValue() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    return a;
  }
  void swap(int a, int b) {
    // for ex a = 5, b = 10
    a = a + b; // a = 15
    b = a - b; // b = 5 i.e swapped
    a = a - b; // a = 10 i.e swapped

    cout << "\nThe value of a: " << a;
    cout << "\nThe value of b: " << b;
  }
};

int main() {

  Swap obj;
  int a = obj.userValue();
  int b = obj.userValue();

  cout << "\n------The values before swapping------\n";
  cout << "\nThe value of a: " << a;
  cout << "\nThe value of b: " << b;

  cout << "\n------The values after swapping------\n";
  obj.swap(a, b);

  cout << "\n";
  return 0;
}