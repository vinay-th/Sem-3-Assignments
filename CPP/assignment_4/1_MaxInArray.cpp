// 1. Write a C++ Program to create a function template for finding a maximum
// value contained in array.
#include <iostream>
using namespace std;
template <typename T> T max(T arr[], int n) {
  T max = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  float f[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Maximum value in int array is: " << max(arr, n);
  cout << "\n";
  cout << "Maximum value in float array is: " << max(f, n);

  cout << "\n";
  return 0;
}