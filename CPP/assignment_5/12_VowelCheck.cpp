// 12. Write a C++ program to create a method that takes a string
//     as input and throws an exception if the string does not contain vowels.
#include <exception>
#include <iostream>
#include <string>

using namespace std;
int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  try {
    if (str.find_first_of("aeiouAEIOU") == string::npos) {
      throw runtime_error("The string does not contain vowels");
    }
    cout << "The string contains vowels";
  } catch (const runtime_error &e) {
    cout << e.what() << '\n';
  }

  cout << "\n";
  return 0;
}