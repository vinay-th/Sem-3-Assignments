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
  int minOf2() {
    int a = userValue();
    int b = userValue();
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

  int res = obj.minOf2();

  cout << "The smallest number is : " << res;

  cout << "\n";
  return 0;
}