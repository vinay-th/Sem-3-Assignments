// Write a c++ program to display numbers divisible with 7 from 1 to 100(using
// while, for, do.. while)

#include <iostream>
using namespace std;
class DivisibleBy7 {
public:
  void print() {
    for (int i = 1; i < 100; i++) {
      if (i % 7 == 0) {
        cout << i << " ";
      }
    }
  }
};
int main() {
  DivisibleBy7 obj;

  obj.print();

  cout << "\n";
  return 0;
}