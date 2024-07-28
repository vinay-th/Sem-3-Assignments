#include <iostream>
using namespace std;

class Prime {
public:
  void primePrint() {
    bool flag;
    for (int i = 2; i <= 100; i++) {
      flag = true;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          flag = false;
          break;
        }
      }
      if (flag) {
        cout << i << " is prime" << endl;
      }
    }
  }
};

int main() {
  Prime obj;
  obj.primePrint();

  cout << "\n";
  return 0;
}
