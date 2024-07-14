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
  int maxOf2(int a, int b) {
    int max;

    if (a > b) {
      max = a;
    } else {
      max = b;
    }

    return max;
  }
  int minOf2(int a, int b) {
    int min;

    if (a < b) {
      min = a;
    } else {
      min = b;
    }

    return min;
  }

} obj;

int main() {
  cout << "\n------------Find max and min num by if else--------------";
  cout << "\nSelect the number to find greatest and smallest-> ";

  int a = obj.userValue();
  int b = obj.userValue();
  int res = obj.maxOf2(a, b);
  cout << "The greatest number is : " << res;

  res = obj.minOf2(a, b);
  cout << "The smallest number is : " << res;
  return 0;
}