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
  cout << "\n------------Find max num by if else--------------";
  cout << "\nSelect the number to find smallest-> ";

  int a = obj.userValue();
  int b = obj.userValue();

  int res = obj.minOf2(a, b);

  cout << "The smallest number is : " << res;

  cout << "\n";
  return 0;
}