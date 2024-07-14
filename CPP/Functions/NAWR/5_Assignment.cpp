#include <iostream>
using namespace std;

class Assignment {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  int assign() {
    int a = userValue();
    cout << "\nValue of a : " << a << " \nValue of b : ";
    int b = a;
    cout << "\nAfter assigning: ";
    cout << "\nValue of a : " << a << " \nValue of b : " << b;
    return b;
  }
  int shrtAdd() {
    int a = userValue();
    cout << "\nValue before: " << a;
    a += a;
    cout << "\nValue after " << a;
    return a;
  }
  int shrtSub() {
    int a = userValue();
    cout << "\nValue before: " << a;
    a -= a;
    cout << "\nValue after " << a;
    return a;
  }
  int shrtMul() {
    int a = userValue();
    cout << "\nValue before: " << a;
    a *= a;
    cout << "\nValue after " << a;
    return a;
  }
  int shrtDiv() {
    int a = userValue();
    cout << "\nValue before: " << a;
    a /= a;
    cout << "\nValue after " << a;
    return a;
  }
  int shrtMod() {
    int a = userValue();
    cout << "\nValue before: " << a;
    a %= a;
    cout << "\nValue after " << a;
    return a;
  }
} assing;

int main() {
  int i;
  cout << "\n-------------------Assignment Operators-------------------";
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) To perform assigning(=) of two number ";
  cout << "\n(2) To perform shorthand add(+=) of a number";
  cout << "\n(3) To perform shorthand sub(-=) of a number";
  cout << "\n(4) To perform shorthand mult(*=) of a number";
  cout << "\n(5) To perform shorthand div(/=) for a number";
  cout << "\n(6) To perform shorthand modulo(%=) for a number";
  cout << "\nEnter your choice: ";
  cin >> i;

  int result;
  switch (i) {
  case 1:
    result = assing.assign();
    break;
  case 2:
    result = assing.shrtAdd();
    break;
  case 3:
    result = assing.shrtSub();
    break;
  case 4:
    result = assing.shrtMul();
    break;
  case 5:
    result = assing.shrtDiv();
    break;
  case 6:
    result = assing.shrtMod();
    break;
  default:
    cout << "\nEnter valid option";
    return -1;
  }

  cout << "\nResult: " << result << "\n";
  return 0;
}
