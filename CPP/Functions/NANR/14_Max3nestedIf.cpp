#include <iostream>
using namespace std;
class maximum {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  void maxOf3() {
    int a = userValue();
    int b = userValue();
    int c = userValue();
    int max;

    if (a > b) {
      if (a > c) {
        max = a;
      } else {
        max = c;
      }
    } else {
      if (b > c) {
        max = b;
      } else {
        max = c;
      }
    }

    cout << "The greatest number is : " << max;
  }

} obj;

int main() {
  cout << "\n------------Find max num by nested if else--------------";
  cout << "\nSelect the number to find greatest-> ";

  obj.maxOf3();

  cout << "\n";
  return 0;
}