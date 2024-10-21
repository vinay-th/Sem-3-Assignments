// 9. Write a C++ program to input a age from user, If age is greater than 18
// then eligible for licence otherwise raise an exception and provide a
// appropriate message.
#include <exception>
#include <iostream>

using namespace std;
int main() {
  int age;

  cout << "Enter your age: ";
  cin >> age;

  try {
    if (age < 18) {
      throw runtime_error("You're not eligible for driving license! Sorry bro");
    }
    cout << "You're eligible for driving license";
  } catch (const runtime_error err) {
    cout << err.what();
  }

  cout << "\n";
  return 0;
}