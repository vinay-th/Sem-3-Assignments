// 17. Write a C++ Program to enter two strings from user and Swap those string
// using function.
#include <iostream>
#include <string>
using namespace std;
void swapStr(string &str1, string &str2) {
  string temp = str1;
  str1 = str2;
  str2 = temp;
}
int main() {
  string str1, str2;
  cout << "Enter the first string: ";
  getline(cin, str1);
  cout << "Enter the second string: ";
  getline(cin, str2);

  swapStr(str1, str2);

  cout << "The first string is: " << str1 << endl;
  cout << "The second string is: " << str2 << endl;

  cout << "\n";
  return 0;
}