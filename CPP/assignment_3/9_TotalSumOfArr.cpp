// 9. Write a C++ Program to find the total of all the array elements using
// Function.
#include <iostream>
using namespace std;
void totalSum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  cout << "\nTotal Sum of the array is: " << sum;
}
int main() {
  int arr[10];
  int size;
  cout << "\nEnter the size of the array: ";
  cin >> size;
  cout << "\nEnter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  totalSum(arr, size);

  cout << "\n";
  return 0;
}