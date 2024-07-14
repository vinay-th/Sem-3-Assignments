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
  int maxOf2() {
    int a = userValue();
    int b = userValue();
    int max;

    if (a > b) {
      max = a;
    } else {
      max = b;
    }

    return max;
  }

} obj;

int main() {
  cout << "\n------------Find max num by if else--------------";
  cout << "\nSelect the number to find greatest-> ";

  int res = obj.maxOf2();
  cout << "The greatest number is : " << res;

  cout << "\n";
  return 0;
}