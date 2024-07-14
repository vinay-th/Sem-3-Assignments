#include <iostream>
using namespace std;
class Bitwise {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  void andGate() {
    int a = userValue();
    int b = userValue();
    int res = a & b;
    cout << "\nAND : " << a << " & " << b << " = " << res;
  }
  void orGate() {
    int a = userValue();
    int b = userValue();
    int res = a | b;

    cout << "\nOR : " << a << " | " << b << " = " << res;
  }
  void xorGate() {
    int a = userValue();
    int b = userValue();
    int res = a ^ b;

    cout << "\nXOR : " << a << " ^ " << b << " = " << res;
  }
  void onesComp() {
    int a = userValue();
    int res = ~a;

    cout << "\nThe one's complement of " << a << " is " << res;
  }
  void leftShift() {
    int a = userValue();
    int res = a >> 2;

    cout << "\nThe right shift of 2 for " << a << " is " << res;
  }
  void rightShift() {
    int a = userValue();
    int res = a << 2;

    cout << "\nThe left shift of 2 for " << a << " is " << res;
  }
} bit;

int main() {
  int i;
  cout << "\n-------------------Bitwise Operators-------------------";
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) To perform AND(&) of two number ";
  cout << "\n(2) To perform OR(|) of two number";
  cout << "\n(3) To perform XOR(^) of two number";
  cout << "\n(4) To perform one's complement of a number";
  cout << "\n(5) To perform left shift for a number";
  cout << "\n(6) To perform right shift for a number";
  cout << "\nEnter your choice: ";
  cin >> i;

  switch (i) {
  case 1:
    bit.andGate();
    break;
  case 2:
    bit.orGate();
    break;
  case 3:
    bit.xorGate();
    break;
  case 4:
    bit.onesComp();
    break;
  case 5:
    bit.leftShift();
    break;
  case 6:
    bit.rightShift();
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}