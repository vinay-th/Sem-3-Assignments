#include <iostream>
using namespace std;

class Number {
public:
  Number() { cout << "Hello, World!" << endl; }

  Number(int n) { cout << "The number is " << n << "." << endl; }

  Number(float f, int n) {
    float sum = f + n;
    cout << "sum: " << sum << "." << endl;
  }

  void display(float num) const { cout << "The number is: " << num << endl; }
};

int main() {
  Number num1;
  Number num2(10);
  num2.display(10);

  Number num3(15.5f, 25);
  num3.display(15.5f + 25);

  return 0;
}
