// 14. Write a C++ Program to print following pyramid
// *
// **
// ***
// ****
// *****
#include <iostream>
using namespace std;
class Pattern {
public:
  int userValues() {
    int a;
    cout << "\nEnter the number of rows: ";
    cin >> a;
    return a;
  }
  void patternPrint(int a) {
    for (int i = 0; i <= a; i++) {
      for (int j = 0; j < i; j++) {
        cout << "* ";
      }
      cout << "\n";
    }
  }
} obj;
int main() {
  int a = obj.userValues();
  obj.patternPrint(a);

  cout << "\n";
  return 0;
}