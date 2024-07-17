#include <cmath>
#include <iostream>

using namespace std;

class Armstrong {
public:
  Armstrong() {
    int num, originalNum, remainder, n = 0, result = 0;
    cout << "\n-------To check if the number is an Armstrong number or "
            "not-----------";
    cout << "\nEnter the number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
      originalNum /= 10;
      ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
      originalNum /= 10;
    }

    if (result == num)
      cout << "\nThis num: " << num << " is an Armstrong number";
    else
      cout << "\nThis num: " << num << " is not an Armstrong number";
  }
};

int main() {
  Armstrong armstrong;
  cout << "\n";
  return 0;
}
