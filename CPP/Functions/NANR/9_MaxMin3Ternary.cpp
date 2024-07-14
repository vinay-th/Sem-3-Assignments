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
  void greatest() {
    int a = userValue();
    int b = userValue();
    int c = userValue();
    int max;

    (a > b && a > c) ? max = a : (b > c) ? max = b : max = c;

    cout << "The greatest number is : " << max;
  }

} obj;

int main() {
  cout << "\n------------Find max num by ternary opt--------------";
  cout << "\nSelect the number to find greatest-> ";

  obj.greatest();

  cout << "\n";
  return 0;
}