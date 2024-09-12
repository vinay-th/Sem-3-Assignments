// 3. Write a C++ Program to illustrate the Traversal of a string.
#include <iostream>
using namespace std;
class StrTrav {
public:
  string str;
  void userString() {
    cout << "Enter a string: ";
    cin >> str;
    cout << "The string is: " << str << endl;
  }
};
int main() {
  StrTrav obj;
  obj.userString();
  cout << "The string is: " << obj.str << endl;
  for (int i = 0; i < obj.str.length(); i++) {
    cout << "The character at position " << i << " index is: " << obj.str[i] << endl;
  }

  cout << "\n";
  return 0;
}