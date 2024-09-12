// 4. Write a C++ program to find the largest element of a given array of
// integers using Function.
#include <iostream>
using namespace std;
class Array {
public:
  Array() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
      cout << "Enter the value of " << i << " element of array: ";
      cin >> arr[i];
    }

    cout << "\n\nThe Largest number of this array is : " << FindLargest(arr, size);
  }
  int FindLargest(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size; i++) {
      if (arr[i] > temp) {
        temp = arr[i];
      }
    }
    return temp;
  }
};
int main() {
  Array obj;

  cout << "\n";
  return 0;
}