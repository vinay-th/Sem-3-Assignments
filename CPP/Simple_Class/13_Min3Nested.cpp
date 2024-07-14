#include <iostream>
using namespace std;
class minimum {
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
  cout << "\n------------Find min num by nested if else--------------";
  cout << "\nSelect the number to find smallest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  obj.c = obj.userValue();
  int min;

  if (obj.a < obj.b) {
    if (obj.a < obj.c) {
      min = obj.a;
    } else {
      min = obj.c;
    }
  } else {
    if (obj.b < obj.c) {
      min = obj.b;
    } else {
      min = obj.c;
    }
  }

  cout << "The smallest number is : " << min;

  cout << "\n";
  return 0;
}