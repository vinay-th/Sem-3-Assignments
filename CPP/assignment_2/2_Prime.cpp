// 2. write a c++ program to check prime number using Function
#include <iostream>
using namespace std;

class Prime {
public:
  bool primeCheck(int a) {
    for (int i = 2; i <= a / 2; i++) {
      if (a % i == 0) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  Prime obj;
  int a;

  cout << "\nEnter a number to check if it is prime: ";
  cin >> a;

  if (obj.primeCheck(a)) {
    cout << "\nThe number " << a << " is a prime number.";
  } else {
    cout << "\nThe number " << a << " is not a prime number.";
  }
  cout << "\n";
  return 0;
}