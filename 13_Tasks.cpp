// 13.
// Write a C++ Program to create a menu driven program for to perform the
// following operations
// 1. Sum of Digit
// 2. Armstrong or Not
// 3. Palindrome or Not
// 4. Multiplication of Digit
#include <iostream>
using namespace std;

class Operations {
public:
  int userValues() {
    int a;
    cout << "\nEnter a number: ";
    cin >> a;
    return a;
  }
  void sum() {
    int a = userValues();
    int b = userValues();
    cout << "\n\nThe sum of " << a << " + " << b << " = " << a + b;
  }
  void armstrong() {
    int n = userValues();
    int rem = 0, sum = 0;
    for (int i = n; i != 0; i /= 10) {
      rem = i % 10;
      sum += rem * rem * rem;
    }
    if (sum == n) {
      cout << "\n\nThe number is an armstrong number.";
    } else {
      cout << "\n\nThe number is not an armstrong number.";
    }
  }
  void palindrome() {
    int n = userValues();
    int rem = 0, revnum = 0;
    for (int i = n; i != 0; i /= 10) {
      rem = i % 10;
      revnum = revnum * 10 + rem;
    }
    if (n == revnum) {
      cout << "\n\nThe number is a palindrome number.";
    } else {
      cout << "\n\nThe number is not a palindrome number.";
    }
  }
  void mult() {
    int a = userValues();
    int b = userValues();
    cout << "\n\nThe multiplication of " << a << " * " << b << " = " << a * b;
  }
} obj;

int main() {
  int opr;
  cout << "\nFollowing operations can be performed: ";
  cout << "\n\n1. Sum of digits";
  cout << "\n2. Armstrong or not";
  cout << "\n3. Palindrome or not";
  cout << "\n4. Multiplication of digits";
  cout << "\n\n\nSelect one operation: ";
  cin >> opr;

  switch (opr) {
  case 1:
    obj.sum();
    break;
  case 2:
    obj.armstrong();
    break;
  case 3:
    obj.palindrome();
    break;
  case 4:
    obj.mult();
    break;
  default:
    cout << "Enter a valid number.";
  }

  cout << "\n";
  return 0;
}