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

} ter;

int main() {
  cout << "\n-------------------Ternary Operators-------------------";
  cout << "\nSelect the number to find greatest-> ";

  int res = ter.greatest();
  cout << "The greatest number is : " << res;

  cout << "\n";
  return 0;
}