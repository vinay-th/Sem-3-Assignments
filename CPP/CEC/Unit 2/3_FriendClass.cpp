// Write a c++ Program to demonstrate the use of Friend class to access the
// member of one class.
#include <iostream>
using namespace std;
class X;
class Demo {
private:
  int x;

public:
  Demo(int num) { x = num; }
  friend class X;
};
class X {
public:
  void print(Demo &obj1) { cout << "The data was: " << obj1.x << endl; }
};
int main() {
  Demo obj1(10);
  X obj2;

  obj2.print(obj1);

  cout << endl;
  return 0;
}