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
  int maxOf2(int a, int b) {
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

  int a = obj.userValue();
  int b = obj.userValue();

  int res = obj.maxOf2(a, b);
  cout << "The greatest number is : " << res;

  cout << "\n";
  return 0;
}