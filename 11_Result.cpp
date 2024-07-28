// 11. Write a C++ program to calculate the sum of 6 subject and find the
// percentage.
#include <iostream>
using namespace std;

class Results {
public:
  int mark[6];
  void marks() {
    for (int i = 1; i <= 6; i++) {
      cout << "Enter the marks of " << i << " subject: ";
      cin >> mark[i];
    }
  }
  void percentage() {
    int sum;
    marks();
    for (int i = 0; i < 6; i++) {
      sum += mark[i];
    }
    cout << "The percentage you got is: " << sum / 6;
  }
};

int main() {

  Results obj;

  obj.percentage();

  cout << "\n";
  return 0;
}