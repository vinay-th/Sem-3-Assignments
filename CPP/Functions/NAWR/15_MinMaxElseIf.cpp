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
  int maxOf3() {
    int a = userValue();
    int b = userValue();
    int c = userValue();
    int max;

    if (a >= b && a >= c) {
      max = a;
    } else if (b >= c && b >= a) {
      max = b;
    } else if (c >= a && c >= b) {
      max = c;
    }

    return max;
  }

  int minOf3() {
    int a = userValue();
    int b = userValue();
    int c = userValue();
    int min;

    if (a <= b && a <= c) {
      min = a;
    } else if (b <= c && b <= a) {
      min = b;
    } else if (c <= a && c <= b) {
      min = c;
    }

    return min;
  }

} obj;

int main() {
  cout << "\n------------Find min max num by else if-------------";
  cout << "\nSelect the number to find greatest-> ";

  int res = obj.maxOf3();
  cout << "The greatest number is : " << res;
  cout << "\n\nSelect the number to find smallest-> ";

  res = obj.minOf3();
  cout << "The smallest number is : " << res;

  cout << "\n";
  return 0;
}