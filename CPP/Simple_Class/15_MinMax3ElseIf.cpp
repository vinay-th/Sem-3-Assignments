#include <iostream>
using namespace std;
class numOperation {
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
  cout << "\n------------Find min max num by else if-------------";
  cout << "\nSelect the number to find greatest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  obj.c = obj.userValue();
  int max;

  if (obj.a >= obj.b && obj.a >= obj.c) {
    max = obj.a;
  } else if (obj.b >= obj.c && obj.b >= obj.a) {
    max = obj.b;
  } else if (obj.c >= obj.a && obj.c >= obj.b) {
    max = obj.c;
  }

  cout << "The greatest number is : " << max;
  cout << "\nSelect the number to find smallest-> ";

  obj.a = obj.userValue();
  obj.b = obj.userValue();
  obj.c = obj.userValue();
  int min;

  if (obj.a <= obj.b && obj.a <= obj.c) {
    min = obj.a;
  } else if (obj.b <= obj.c && obj.b <= obj.a) {
    min = obj.b;
  } else if (obj.c <= obj.a && obj.c <= obj.b) {
    min = obj.c;
  }

  cout << "The smallest number is : " << min;

  cout << "\n";
  return 0;
}