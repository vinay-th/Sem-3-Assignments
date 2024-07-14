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
  void maxOf3(int a, int b, int c) {
    int max;

    if (a >= b && a >= c) {
      max = a;
    } else if (b >= c && b >= a) {
      max = b;
    } else if (c >= a && c >= b) {
      max = c;
    }

    cout << "The greatest number is : " << max;
  }

  void minOf3(int a, int b, int c) {
    int min;

    if (a <= b && a <= c) {
      min = a;
    } else if (b <= c && b <= a) {
      min = b;
    } else if (c <= a && c <= b) {
      min = c;
    }

    cout << "The smallest number is : " << min;
  }

} obj;

int main() {
  cout << "\n------------Find min max num by else if-------------";
  cout << "\nSelect the number to find greatest-> ";
  int a = obj.userValue();
  int b = obj.userValue();
  int c = obj.userValue();

  obj.maxOf3(a, b, c);
  cout << "\nSelect the number to find smallest-> ";
  a = obj.userValue();
  b = obj.userValue();
  c = obj.userValue();
  obj.minOf3(a, b, c);

  cout << "\n";
  return 0;
}