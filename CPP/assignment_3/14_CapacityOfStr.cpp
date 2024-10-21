// 14. Write a C++ Program by entering a string a string anf find out the
// capacity of the string.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cout << "Enter the string: ";
  cin >> str;
  cout << "The capacity of the string is: " << str.capacity() << endl;

  cout << "\n";
  return 0;
}