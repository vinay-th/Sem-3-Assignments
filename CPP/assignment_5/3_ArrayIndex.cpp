// 3. Write a program to take array values from user and illustrate array index
// out of bound exception
#include <exception>
#include <iostream>

using namespace std;
int main() {
  int n;
  cout << "Enter the number of elements of the array: ";
  cin >> n;

  int arr[n];

  try {
    int i;
    cout << "Enter the index of the array you want to access: ";
    cin >> i;
    if (i > n) {
      throw 1;
    }
    cout << "The value at [" << i << "] index is : " << arr[i];

  } catch (int err) {
    cout << "Your array index accessing is out of bound";
  }

  cout << "\n";
  return 0;
}