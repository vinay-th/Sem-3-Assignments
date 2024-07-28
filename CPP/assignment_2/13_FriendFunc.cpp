// 13. Write a c++ Program to demonstrate the use of Friend class to access the
// member of one class.
#include <iostream>
using namespace std;

class Demo {
private:
  int val;

public:
  void setData(int a) { val = a; }
  friend void showPvt(Demo &obj);
};

void showPvt(Demo &obj) { cout << "\nValue: " << obj.val; }

int main() {
  int a;
  Demo o1;
  cout << "\nTo show data of private data in class: ";
  cout << "\nEnter some data:";
  cin >> a;

  o1.setData(a);

  cout << "\n\nShowing data with a friend function: ";
  showPvt(o1);

  cout << "\n";
  return 0;
}