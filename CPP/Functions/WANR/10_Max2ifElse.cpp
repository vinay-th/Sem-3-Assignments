#include <iostream>
using namespace std;
class maximum {
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

} obj;

int main() {
  cout << "\n------------Find max num by if else--------------";
  cout << "\nSelect the number to find greatest-> ";

  int a = obj.userValue();
  int b = obj.userValue();

  obj.maxOf2(a, b);

  cout << "\n";
  return 0;
}