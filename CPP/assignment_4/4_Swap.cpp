// 4. Write program for swapping two values of different data type with use of
// function template.
#include <iostream>
using namespace std;
template <typename T1, typename T2> void swap(T1 &a, T2 &b) {
  auto temp = a;
  a = static_cast<T1>(b);
  b = static_cast<T2>(temp);

  cout << "\nSwapping done";
}
int main() {
  int a = 10, b = 20;
  cout << "Before Swapping: " << a << " " << b << endl;
  swap(a, b);
  cout << "After Swapping: " << a << " " << b << endl;

  float x = 10.5, y = 20.5;
  cout << "Before Swapping: " << x << " " << y << endl;
  swap(x, y);
  cout << "After Swapping: " << x << " " << y;

  cout << "\n";
  return 0;
}