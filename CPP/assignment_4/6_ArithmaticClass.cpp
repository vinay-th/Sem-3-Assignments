// 6. Write a C++ Program to add, subtract, multiply and divide two numbers
// using class template.
#include <iostream>
using namespace std;
template <class C> class Arithmetic {
public:
  C num1, num2;
  Arithmetic(C num1, C num2) {
    this->num1 = num1;
    this->num2 = num2;
  }
  void add() {
    cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2)
         << endl;
  }
  void sub() {
    cout << "The difference of " << num1 << " and " << num2 << " is "
         << (num1 - num2) << endl;
  }
  void mul() {
    cout << "The product of " << num1 << " and " << num2 << " is "
         << (num1 * num2) << endl;
  }
  void div() {
    cout << "The quotient of " << num1 << " and " << num2 << " is "
         << (num1 / num2) << endl;
  }
};
int main() {
  Arithmetic<int> obj(10, 20);
  obj.add();
  obj.sub();
  obj.mul();
  obj.div();

  cout << "\n";
  Arithmetic<float> obj2(10.5, 20.5);
  obj2.add();
  obj2.sub();
  obj2.mul();
  obj2.div();

  cout << "\n";
  return 0;
}