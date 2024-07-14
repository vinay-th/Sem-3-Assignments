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
  void greatest() {
    int a = userValue();
    int b = userValue();
    int max;

    (a > b) ? max = a : max = b;

    cout << "The greatest number is : " << max;
  }

} ter;

int main() {
  cout << "\n-------------------Ternary Operators-------------------";
  cout << "\nSelect the number to find greatest-> ";

  ter.greatest();

  cout << "\n";
  return 0;
}