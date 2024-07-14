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
  int andGate(int a, int b) {
    int res = a & b;
    return res;
  }
  int orGate(int a, int b) {
    int res = a | b;

    return res;
  }
  int xorGate(int a, int b) {
    int res = a ^ b;

    return res;
  }
  int onesComp(int a) {
    int res = ~a;

    return res;
  }
  int leftShift(int a) {
    int res = a >> 2;

    return res;
  }
  int rightShift(int a) {
    int res = a << 2;

    return res;
  }
} bit;

int main() {
  int i;
  int a = bit.userValue();
  int b = bit.userValue();
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
    cout << "\nAND : " << bit.andGate(a, b);
    break;
  case 2:
    cout << "\nOR : " << bit.orGate(a, b);
    break;
  case 3:
    cout << "\nXOR : " << bit.xorGate(a, b);
    break;
  case 4:
    cout << "\nThe one's complement of is " << bit.onesComp(a);

    break;
  case 5:
    cout << "\nThe right shift of 2 for is " << bit.leftShift(a);
    break;
  case 6:
    cout << "\nThe left shift of 2 for is " << bit.rightShift(a);
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}