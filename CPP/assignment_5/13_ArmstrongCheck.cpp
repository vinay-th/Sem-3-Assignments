// 13. Write a C++ program to take a value from user and check the number is
// armstrong or not, If not than raise an exception.
#include <iostream>
using namespace std;
int main() {
  int num;

  cout << "Enter an armstrong number: ";
  cin >> num;

  try {
    if (num <= 0) {
      throw 0;
    }
    int sum = 0;
    int rem = 0;

    for (int i = num; i != 0; i /= 10) {
      rem = i % 10;
      sum += rem * rem * rem;
    }
    if (sum == num) {
      cout << "The number is armstrong";
    } else {
      throw 1;
    }
  } catch (int e) {
    if (e == 0) {
      cout << "Enter a valid number";
    } else {
      cout << "The number is not armstrong";
    }
  }

  cout << "\n";
  return 0;
}