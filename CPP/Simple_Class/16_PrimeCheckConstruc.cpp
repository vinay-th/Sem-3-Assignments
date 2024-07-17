#include <iostream>
using namespace std;
class Prime {
public:
  Prime() {
    int a, flag = 0;
    cout << "\n-------To check if the number is prime or not-----------";
    cout << "\nEnter the number: ";
    cin >> a;

    for (int i = 2; i < a / 2; i++) {
      if (a % i == 0) {
        flag = 1;
        break;
      }
    }

    if (!flag)
      cout << "\nThis num: " << a << " is a prime number";
    else
      cout << "\nThis num: " << a << " is not a prime number";
  }
};
int main() {
  Prime prm;
  cout << "\n";
  return 0;
}