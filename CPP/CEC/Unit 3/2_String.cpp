// Write a C++ Program to enter two strings from user and append first string
// to another string.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1, str2;

  cout << "Enter the first string: ";
  getline(cin, str1);

  cout << "Enter the second string: ";
  getline(cin, str2);

  str2.append(str1);

  cout << "\nAfter appending string 2 with string 1 we get : " << str2;

  cout << endl;
  return 0;
}