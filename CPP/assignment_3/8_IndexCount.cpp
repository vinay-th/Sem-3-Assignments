// Write a C++ program to count the number of elements in an integer Array using
// Function.
#include <iostream>
using namespace std;

int countElements(int arr[], int size) { return size; }

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "The number of elements in the array: " << countElements(arr, size)
       << endl;

  return 0;
}
