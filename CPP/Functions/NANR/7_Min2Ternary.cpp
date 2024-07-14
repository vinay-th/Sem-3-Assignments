#include <iostream>
using namespace std;
class Ternary {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  void smallest() {
    int a = userValue();
    int b = userValue();
    int min;

    (a < b) ? min = a : min = b;

    cout << "The smallest number is : " << min;
  }

} ter;

int main() {
  cout << "\n------------Find small num by ternary opt--------------";
  cout << "\nSelect the number to find smallest-> ";

  ter.smallest();

  cout << "\n";
  return 0;
}