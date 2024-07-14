#include <iostream>
using namespace std;
class minimum {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  int minOf3() {
    int a = userValue();
    int b = userValue();
    int c = userValue();
    int min;

    if (a < b) {
      if (a < c) {
        min = a;
      } else {
        min = c;
      }
    } else {
      if (b < c) {
        min = b;
      } else {
        min = c;
      }
    }

    return min;
  }

} obj;

int main() {
  cout << "\n------------Find max num by nested if else--------------";
  cout << "\nSelect the number to find smallest-> ";

  int res = obj.minOf3();
  cout << "The smallest number is : " << res;

  cout << "\n";
  return 0;
}