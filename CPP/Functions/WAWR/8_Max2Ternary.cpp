#include <iostream>
using namespace std;
class Ternary {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  int greatest(int a, int b) {
    int max;

    (a > b) ? max = a : max = b;

    return max;
  }

} ter;

int main() {
  cout << "\n------------Find bigger num by ternary opt--------------";
  cout << "\nSelect the number to find greatest-> ";

  int a = ter.userValue();
  int b = ter.userValue();

  int res = ter.greatest(a, b);
  cout << "The greatest number is : " << res;

  cout << "\n";
  return 0;
}