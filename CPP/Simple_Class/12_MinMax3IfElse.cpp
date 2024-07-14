#include <iostream>
using namespace std;
class numOperation {
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
  cout << "\n------------Find max and min num by if else--------------";
  cout << "\nSelect the number to find greatest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  int max;

  if (obj.a > obj.b) {
    max = obj.a;
  } else {
    max = obj.b;
  }

  cout << "The greatest number is : " << max;

  cout << "\nSelect the number to find smallest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  int min;

  if (obj.a < obj.b) {
    min = obj.a;
  } else {
    min = obj.b;
  }

  cout << "The smallest number is : " << min;

  return 0;
}