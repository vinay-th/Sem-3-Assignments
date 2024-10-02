// Write a C++ program to accept an email address and throw an exception if it
// does not contain @ symbol
#include <iostream>
using namespace std;
int main() {
  string email;
  cout << "Enter your email: ";
  cin >> email;

  try {
    if (email.find('@') == string::npos) {
      throw "Invalid email address: Missing '@'";
    }
    cout << "Email is valid" << endl;
  } catch (const char *msg) {
    cout << msg << endl;
  }

  cout << "\n";
  return 0;
}