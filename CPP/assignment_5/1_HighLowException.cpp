// 1. Write a program to input n integer numbers and display highest and second
// highest number. Also handle the different exceptions possible to be thrown
// during execution.
#include <exception>
#include <iostream>

using namespace std;
int main() {
  int n;
  cout << "Enter the number of array elements: ";
  cin >> n;

  try {
    if (n <= 1)
      throw 1;
    int arr[n];

    for (int i = 0; i < n; i++) {
      cout << "Enter the number on [" << i << "] index: ";
      cin >> arr[i];
    }
    int max = 0;
    int sMax = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] > max) {
        sMax = max;
        max = arr[i];
      }
    }

    cout << "The largest number in array is: " << max << endl;
    cout << "The second largest number in array is: " << sMax << endl;

  } catch (int e) {
    cout << "Enter more than 1 number please";
  }

  cout << "\n";
  return 0;
}