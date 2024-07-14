#include <iostream>
using namespace std;
class Logical {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  int greaterAnd() {
    int a = userValue();
    int b = userValue();

    if (a > 5 && b > 5) {
      return 1;
    } else {
      return 0;
    }
  }
  int greaterOr() {
    int a = userValue();
    int b = userValue();

    if (a > 5 || b > 5) {
      return 1;
    } else {
      return 0;
    }
  }
  int greaterNot() {
    int a = userValue();
    int b = userValue();

    if (!(a > 5)) {
      return 1;
    } else {
      return 0;
    }
  }
} logic;

int main() {
  int i;
  cout << "\n-------------------Logical Operators-------------------";
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) Check greatest with AND (&&) w.r.t 5";
  cout << "\n(2) Check greatest with OR (||) w.r.t 5";
  cout << "\n(3) Check first number with NOT (!) w.r.t 5";
  cout << "\nEnter your choice: ";
  cin >> i;

  switch (i) {
  case 1:
    if (logic.greaterAnd()) {
      cout << "\nBoth a and b are greater than 5";
    } else {
      cout << "\nBoth values are not greater than 5";
    }

    break;
  case 2:
    if (logic.greaterOr()) {
      cout << "\nEither a or b are greater than 5";
    } else {
      cout << "\nEither values are not greater than 5";
    }
    break;
  case 3:

    if (logic.greaterNot()) {
      cout << "\na is not greater than 5";
    } else {
      cout << "\na is greater than 5";
    }
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}