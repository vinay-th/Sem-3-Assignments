// 9. Write a C++ program to swap numbers using friend function.
#include <iostream>
using namespace std;

class Swap {
private:
  int a, b;

public:
  void getData(int x, int y) {
    a = x;
    b = y;
  }
  void showData() {
    cout << "\na: " << a;
    cout << "\nb: " << b;
  }
  friend void swapNum(Swap &obj);
};

void swapNum(Swap &obj) {
  int temp = obj.a;
  obj.a = obj.b;
  obj.b = temp;
}

int main() {
  Swap o1;
  o1.getData(10, 20);

  cout << "Before swapping: " << endl;
  o1.showData();
  swapNum(o1);

  cout << "\nAfter swapping: " << endl;
  o1.showData();

  cout << "\n";
  return 0;
}