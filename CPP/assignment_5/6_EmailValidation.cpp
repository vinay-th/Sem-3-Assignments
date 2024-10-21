// 6. Write a C++ program to accept an email address and throw an exception if
// it does not contain @ symbol.|
#include <exception>
#include <iostream>
#include <string>

using namespace std;
int main() {
  string mail;
  cout << "Enter your mail: ";
  cin >> mail;

  try {
    if (mail.find('@') == string::npos)
      throw 0;
    cout << "The email address is valid";
  } catch (int e) {
    cout << "Enter a valid email address";
  }

  cout << "\n";
  return 0;
}