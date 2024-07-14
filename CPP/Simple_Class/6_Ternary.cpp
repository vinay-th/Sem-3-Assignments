#include <iostream>
using namespace std;
class Ternary{
public:
    int a, b, max;
}ter;
int main() {

  cout << "\nEnter the value of A: ";
  cin >> ter.a;

  cout << "\nEnter the value of B: ";
  cin >> ter.b;

  cout << "\n\n------------- (? :) Ternary operator -----------------";

  int max = (ter.a > ter.b) ? ter.max = ter.a : ter.max = ter.b;
  cout << "\n\nMaximum num of " << ter.a << " and " << ter.b << " is " << ter.max;

  cout << "\n\n";
  return 0;
}