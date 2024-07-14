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
  int maxOf3(int a, int b, int c) {
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

    return max;
  }

} obj;

int main() {
  cout << "\n------------Find max num by nested if else--------------";
  cout << "\nSelect the number to find greatest-> ";
  int a = obj.userValue();
  int b = obj.userValue();
  int c = obj.userValue();

  int res = obj.maxOf3(a, b, c);
  cout << "The greatest number is : " << res;

  cout << "\n";
  return 0;
}