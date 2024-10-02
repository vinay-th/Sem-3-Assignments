// Write a C++ Program to display largest among two numbers using function
// templates. Pass Integer, Float and Character as parameter to the template.
#include <iostream>
using namespace std;
template <typename T> T findLargest(T a, T b) { return (a > b) ? a : b; }
int main() {
  int num1 = 10, num2 = 5;
  cout << "Larger between " << num1 << " and " << num2 << " is "
       << findLargest(num1, num2) << endl;

  float float1 = 10.542, float2 = 20.695;
  cout << "Larger between " << float1 << " and " << float2 << " is "
       << findLargest(float1, float2) << endl;

  char char1 = 'A', char2 = 'Z';
  cout << "Larger between '" << char1 << "' and '" << char2 << "' is: '"
       << findLargest(char1, char2) << "'" << endl;

  cout << endl;
  return 0;
}