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
  void maxOf3(int a, int b, int c) {
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

  int a = obj.userValue();
  int b = obj.userValue();
  int c = obj.userValue();

  obj.maxOf3(a, b, c);

  cout << "\n";
  return 0;
}