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
  int smallest(int a, int b) {
    int min;

    (a < b) ? min = a : min = b;

    return min;
  }

} ter;

int main() {
  cout << "\n------------Find small num by ternary opt--------------";
  cout << "\nSelect the number to find smallest-> ";

  int a = ter.userValue();
  int b = ter.userValue();

  int res = ter.smallest(a, b);
  cout << "The smallest number is : " << res;

  cout << "\n";
  return 0;
}