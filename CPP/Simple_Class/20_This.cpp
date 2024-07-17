#include <iostream>
using namespace std;

class This {
public:
  int x;
  void setX(int x) { this->x = x; }
  void print() { cout << "x = " << x; }
};

int main() {
  This obj;
  int x = 20;
  obj.setX(x);
  obj.print();
  return 0;
}