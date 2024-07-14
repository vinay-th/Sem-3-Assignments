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
  void greatest(int a, int b, int c) {
    int max;

    (a > b && a > c) ? max = a : (b > c) ? max = b : max = c;

    cout << "The greatest number is : " << max;
  }

} obj;

int main() {
  cout << "\n------------Find max num by ternary opt--------------";
  cout << "\nSelect the numbers to find greatest-> ";

  int a = obj.userValue();
  int b = obj.userValue();
  int c = obj.userValue();

  obj.greatest(a, b, c);

  cout << "\n";
  return 0;
}