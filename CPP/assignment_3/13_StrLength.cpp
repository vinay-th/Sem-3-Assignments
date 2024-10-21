// 13. Write a C++ Program to enter a string from user and find Length of that
// string
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cout << "Enter the string: ";
  cin >> str;

  cout << "The length of the string is : " << str.length() << endl;

  cout << "\n";
  return 0;
}