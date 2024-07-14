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
  int maxOf3(int a, int b, int c) {
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

  int minOf3(int a, int b, int c) {
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
  cout << "\nSelect the number to find greatest and smallest-> ";
  int a = obj.userValue();
  int b = obj.userValue();
  int c = obj.userValue();

  int res = obj.maxOf3(a, b, c);
  cout << "\n\nThe greatest number is : " << res;

  res = obj.minOf3(a, b, c);
  cout << "\n\nThe smallest number is : " << res;

  cout << "\n";
  return 0;
}