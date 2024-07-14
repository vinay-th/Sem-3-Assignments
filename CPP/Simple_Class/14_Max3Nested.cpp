#include <iostream>
using namespace std;
class maximum {
public:
  int a, b, c;
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }

} obj;

int main() {
  cout << "\n------------Find max num by nested if else--------------";
  cout << "\nSelect the number to find greatest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  obj.c = obj.userValue();
  int max;

  if (obj.a > obj.b) {
    if (obj.a > obj.c) {
      max = obj.a;
    } else {
      max = obj.c;
    }
  } else {
    if (obj.b > obj.c) {
      max = obj.b;
    } else {
      max = obj.c;
    }
  }

  cout << "The greatest number is : " << max;

  cout << "\n";
  return 0;
}