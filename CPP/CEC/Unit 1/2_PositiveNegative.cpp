// 1. write a c++ program to find a number is positive or negative.(use ternary
// operator, also with simple if...else)
#include <iostream>
using namespace std;
class numCheck {
public:
  bool positiveCheck(int x) {
    if (x < 0) {
      return false;
    } else {
      return true;
    }
  }
};
int main() {
  int num;
  numCheck obj;

  cout << "Enter to check if number is positive or negative: ";
  cin >> num;

  if (num != 0) {
    if (obj.positiveCheck(num)) {
      cout << "Your number " << num << " is positive.\n";
    } else {
      cout << "Your number " << num << " is negative.\n";
    }
  } else {
    cout << "Your num is zero";
  }

  cout << "\n";
  return 0;
}