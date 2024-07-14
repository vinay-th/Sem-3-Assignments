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
  void greatest(int a, int b) {
    int max;

    (a > b) ? max = a : max = b;

    cout << "The greatest number is : " << max;
  }

} obj;

int main() {
  cout << "\n------------Find max num by ternary opt--------------";
  cout << "\nSelect the number to find greatest-> ";

  int a = obj.userValue();
  int b = obj.userValue();

  obj.greatest(a, b);

  cout << "\n";
  return 0;
}