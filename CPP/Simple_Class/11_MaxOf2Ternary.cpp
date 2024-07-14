#include <iostream>
using namespace std;
class maximum {
public:
  int a, b;
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }

} obj;

int main() {
  cout << "\n------------Find max num by ternary opt--------------";
  cout << "\nSelect the number to find greatest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  int max;

  (obj.a > obj.b) ? max = obj.a : max = obj.b;

  cout << "The greatest number is : " << max;

  cout << "\n";
  return 0;
}