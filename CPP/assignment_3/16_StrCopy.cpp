// 16. Write a C++ Program to enter two string and copy one string to another.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1, str2;
  cout << "Enter the first string: ";
  getline(cin, str1);

  str2 = str1;

  cout << "The copied string is : " << str2 << endl;

  cout << "\n";
  return 0;
}