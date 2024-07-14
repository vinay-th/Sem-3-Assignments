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
  void minOf3(int a, int b, int c) {
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

    cout << "The smallest number is : " << min;
  }

} obj;

int main() {
  cout << "\n------------Find max num by nested if else--------------";
  cout << "\nSelect the number to find smallest-> ";

  int a = obj.userValue();
  int b = obj.userValue();
  int c = obj.userValue();

  obj.minOf3(a, b, c);

  cout << "\n";
  return 0;
}