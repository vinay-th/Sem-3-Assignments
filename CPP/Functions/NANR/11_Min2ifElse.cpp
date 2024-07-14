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
  cout << "\n------------Find max num by if else--------------";
  cout << "\nSelect the number to find smallest-> ";

  obj.minOf2();

  cout << "\n";
  return 0;
}