#include <iostream>
using namespace std;
class Ternary {
public:
  int a, b;
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
} ter;

int main() {
  cout << "\n------------Find small num by ternary opt--------------";
  cout << "\nSelect the number to find smallest-> ";

  ter.a = ter.userValue();
  ter.b = ter.userValue();
  int min;

  (ter.a < ter.b) ? min = ter.a : min = ter.b;

  cout << "The smallest number is : " << min;

  cout << "\n";
  return 0;
}