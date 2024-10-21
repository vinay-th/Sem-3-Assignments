// 10. Write a C++ program to create a method that takes an integer as a
// parameter and throws an exception in another function if the number is odd.
#include <exception>
#include <iostream>

using namespace std;
void oddCheck(int n) {
  try {
    if (n % 2 == 0) {
      throw runtime_error("The number is not odd");
    }
    cout << "The number is odd";
  } catch (const runtime_error e) {
    cout << e.what() << '\n';
  }
}
int main() {
  int x;

  cout << "Enter any odd number: ";
  cin >> x;

  oddCheck(x);

  cout << "\n";
  return 0;
}