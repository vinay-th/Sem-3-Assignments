#include <iostream>
using namespace std;
class Relational {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  int greatCheck() {
    int a = userValue();
    int b = userValue();

    if (a > b) {
      return 1;
    } else {
      return 0;
    }
  }
  int smallCheck() {
    int a = userValue();
    int b = userValue();

    if (a < b) {
      return 1;
    } else {
      return 0;
    }
  }
  int notEqual() {
    int a = userValue();
    int b = userValue();

    if (a != b) {
      return 1;
    } else {
      return 0;
    }
  }
} rel;

int main() {
  int i;
  cout << "\n-------------------Relational Operators-------------------";
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) Check greatest with ( > )";
  cout << "\n(2) Check smallest with ( < )";
  cout << "\n(3) Check weather number are equal ( != )";
  cout << "\nEnter your choice: ";
  cin >> i;

  switch (i) {
  case 1:
    if (rel.greatCheck()) {
      cout << "\na is greater than b";
    } else {
      cout << "\na is not greater than b";
    }
    break;
  case 2:
    if (rel.smallCheck()) {
      cout << "\na is smaller than b";
    } else {
      cout << "\na is not smaller than b";
    }
    break;
  case 3:
    if (rel.notEqual()) {
      cout << "\na is not equal than 5";
    } else {
      cout << "\na is equal than 5";
    }
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}