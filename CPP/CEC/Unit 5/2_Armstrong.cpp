#include <cmath>
#include <iostream>

using namespace std;

bool isArmstrong(int number) {
  int originalNumber = number;
  int sum = 0, digits = 0;

  for (int temp = originalNumber; temp != 0; temp /= 10)
    digits++;

  for (int temp = originalNumber; temp != 0; temp /= 10) {
    int digit = temp % 10;
    sum += pow(digit, digits);
  }

  return sum == number;
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  try {
    if (!isArmstrong(number)) {
      throw false;
    }
    cout << number << " is an Armstrong number." << endl;
  } catch (bool) {
    cout << "The number is not an Armstrong number." << endl;
  }

  return 0;
}
