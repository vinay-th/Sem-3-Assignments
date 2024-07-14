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
  void greatest(int a, int b) {
    int max;

    (a > b) ? max = a : max = b;

    cout << "The greatest number is : " << max;
  }

} ter;

int main() {
  cout << "\n-------------------Ternary Operators-------------------";
  cout << "\nSelect the number to find greatest-> ";
  int a = ter.userValue();
  int b = ter.userValue();
  ter.greatest(a, b);

  cout << "\n";
  return 0;
}