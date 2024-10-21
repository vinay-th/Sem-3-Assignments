// 7. Write a C++ Program to display largest among two numbers using function
// templates. Pass Integer, Float and Character as parameter to the template.
#include <iostream>
using namespace std;
template <typename T> T findLargest(T a, T b) {
  if (a > b) {
    return a;
  }
  return b;
}

int main() {
  cout << "The largest between 5 and 10 is " << findLargest(5, 10);
  cout << "\n";
  cout << "The largest between 10.5 and 20.5 is " << findLargest(10.5, 20.5);
  cout << "\n";
  cout << "The largest between 'a' and 'b' is " << findLargest('a', 'b');
  cout << "\n";

  cout << "\n";
  return 0;
}