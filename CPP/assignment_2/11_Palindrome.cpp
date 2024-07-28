// 11. Write a Program with function to Check Whether a Number Is a Palindrome
// or Not.
#include <iostream>
using namespace std;

class Palindrome {
public:
  bool checkPalindrome(int a) {
    int rem = 0, revNum;
    for (int i = a; i != 0; i /= 10) {
      rem = i % 10;
      revNum = revNum * 10 + rem;
    }
    if (a == revNum) {
      return true;
    }
    return false;
  }
};

int main() {
  Palindrome obj;
  int a;

  cout << "Enter number to check if it is palindrome: ";
  cin >> a;
  if (obj.checkPalindrome(a)) {
    cout << "\nThe number is palindrome.";
  } else {
    cout << "\nThe number is not palindrome.";
  }
  cout << "\n";
  return 0;
}