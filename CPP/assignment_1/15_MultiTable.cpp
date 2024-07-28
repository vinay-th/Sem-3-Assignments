// 15. Write a C++ Program to print multiplication table.
#include <iostream>
using namespace std;

class MultTable {
public:
  void printTable(int a) {
    for (int i = 1; i <= 10; i++) {
      cout << a << " * " << i << " = " << a * i << endl;
    }
  }
} obj;

int main() {
  int a;
  cout << "Enter the number to get multiplication table: ";
  cin >> a;

  obj.printTable(a);

  cout << "\n";
  return 0;
}