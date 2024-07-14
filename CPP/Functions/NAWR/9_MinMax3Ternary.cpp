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
  int greatest() {
    int a = userValue();
    int b = userValue();
    int max;

    (a > b) ? max = a : max = b;

    return max;
  }
  int smallest() {
    int a = userValue();
    int b = userValue();
    int min;

    (a < b) ? min = a : min = b;

    return min;
  }

} ter;

int main() {
  cout << "\n------------Find bigger num by ternary opt--------------";
  cout << "\nSelect the number to find greatest-> ";

  int res = ter.greatest();
  cout << "The greatest number is : " << res;

  cout << "\n";

  cout << "\n------------Find small num by ternary opt--------------";
  cout << "\nSelect the number to find smallest-> ";

  res = ter.smallest();
  cout << "The smallest number is : " << res;

  cout << "\n";
  return 0;
}