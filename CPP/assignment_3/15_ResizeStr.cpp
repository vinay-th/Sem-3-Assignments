// 15. Write a C++ program to resize the string by 10.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;

  cout << "Enter the string: ";
  cin >> str;

  cout << "The string before resizing: " << str.size() << endl;
  str.resize(str.size() + 10);
  cout << "The string after resizing: " << str.size() << endl;

  cout << "\n";
  return 0;
}