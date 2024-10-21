// 4. Write a C++ program which asks the user to input a number which should be
// greater than equal to zero and should be less than to 100, If not raise an
// exception.
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number between 1-100: ";
  cin >> n;
  try {
    if (n <= 0)
      throw 0;
    if (n >= 100)
      throw 1;
    cout << "The number is valid";
  } catch (int e) {
    if (e == 0)
      cout << "Number should be greater than 0";
    else if (e == 1)
      cout << "Number should be less than 100";
  }

  cout << "\n";
  return 0;
}