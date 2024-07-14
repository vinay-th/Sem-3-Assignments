#include <iostream>
using namespace std;
class numOperation {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  void maxOf2(int a, int b) {
    int max;

    if (a > b) {
      max = a;
    } else {
      max = b;
    }

    cout << "The greatest number is : " << max;
  }
  void minOf2(int a, int b) {
    int min;

    if (a < b) {
      min = a;
    } else {
      min = b;
    }

    cout << "The smallest number is : " << min;
  }

} obj;

int main() {
  cout << "\n------------Find max and min num by if else--------------";
  cout << "\nSelect the number to find greatest-> ";
  int a = obj.userValue();
  int b = obj.userValue();
  obj.maxOf2(a, b);

  cout << "\nSelect the number to find smallest-> ";
  a = obj.userValue();
  b = obj.userValue();
  obj.minOf2(a, b);
  return 0;
}