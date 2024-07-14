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
  cout << "\n------------Find max num by if else--------------";
  cout << "\nSelect the number to find smallest-> ";

  int a = obj.userValue();
  int b = obj.userValue();
  obj.minOf2(a, b);

  cout << "\n";
  return 0;
}