// 12. Write a program to create template class to find simple interest of
// integer and float value using function template.
#include <iostream>
using namespace std;
template <typename T1, typename T2>
auto simpleIntrest(T1 principal, T2 rate, int time) {
  return principal * rate * time / 100;
}
int main() {
  int principal = 1000;
  float rate = 5.5;
  int time = 5;
  cout << "Simple interest of $" << principal << " with " << rate << "% rate and " << time << " years is : $" << simpleIntrest(principal, rate, time) << endl;

  cout << "\n";
  return 0;
}