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
  void maxOf2() {
    int a = userValue();
    int b = userValue();
    int max;

    if (a > b) {
      max = a;
    } else {
      max = b;
    }

    cout << "The greatest number is : " << max;
  }
  void minOf2() {
    int a = userValue();
    int b = userValue();
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

  obj.maxOf2();

  cout << "\nSelect the number to find smallest-> ";

  obj.minOf2();
  return 0;
}