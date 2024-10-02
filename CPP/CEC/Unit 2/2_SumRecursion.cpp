#include <iostream>
using namespace std;

class Sum {
public:
  int sum(int x) {
    if (x == 1) {
      return 1;
    } else {
      return x + sum(x - 1);
    }
  }
};

int main() {
  Sum obj;
  int num;

  cout << "Enter a number: ";
  cin >> num;

  int result = obj.sum(num);

  cout << "The sum of numbers from 1 to " << num << " is: " << result << endl;
  return 0;
}
