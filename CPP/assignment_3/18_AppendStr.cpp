// 18. Write a C++ Program to enter two strings from user and append first
// string to another string.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1, str2;

  cout << "Enter the first string: ";
  getline(cin, str1);
  cout << "Enter the second string: ";
  getline(cin, str2);
  str1.append(str2);

  cout << "The first string after appending: " << str1;

  cout << "\n";
  return 0;
}