#include <iostream>
using namespace std;
class Bitwise{
public:
    unsigned int a = 10; // binary = 11110
    unsigned int b = 20; // binary = 10100
    unsigned int res;
}bit;
int main() {
  

  cout << "\n\n------------- & AND Operator --------------------";
  bit.res = bit.a & bit.b;
  cout << "\na AND b = " << bit.res;

  cout << "\n\n------------- | OR Operator --------------------";
  bit.res = bit.a | bit.b;
  cout << "\na OR b = " << bit.res;

  cout << "\n\n------------- ^ XOR Operator --------------------";
  bit.res = bit.a ^ bit.b;
  cout << "\na XOR b = " << bit.res;

  cout << "\n\n------------- ~ one's complement Operator -----------------";
  bit.res = ~bit.a;
  cout << "\nOne's complement of a = " << bit.res;

  cout << "\n\n------------- << left shift Operator -----------------";
  bit.res = bit.a << 2;
  cout << "\nLeft shift of a = " << bit.res;

  cout << "\n\n------------- >> right shift Operator -----------------";
  bit.res = bit.a >> 2;
  cout << "\nLeft shift of a = " << bit.res;

  cout << "\n\n\n";
  return 0;
}