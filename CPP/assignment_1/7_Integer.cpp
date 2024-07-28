// 7. Write a C++ program to check whether the integer entered by user is
// positive, negative or zero using nested if-else.
#include <iostream>
using namespace std;

class Integers {
public:
  int a;
};

int main() {
  Integers obj;

  cout << "Enter an integer to check : ";
  cin >> obj.a;

  if (obj.a > 0) {
    cout << "\n\n" << obj.a << " is a positive integer.";
  } else {
    if (obj.a < 0) {
      cout << "\n\n" << obj.a << " is a negative integer.";
    } else {
      cout << "\n\n" << obj.a << " is a 0.";
    }
  }

  cout << "\n";
  return 0;
}