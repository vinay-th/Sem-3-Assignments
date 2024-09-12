// 1. Write a c++ Program to illustrate the traversal of an 1D Array.
#include <iostream>
using namespace std;
class Array {
public:
  int userValue() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    return size;
  }
};
int main() {
  Array obj;
  int size = obj.userValue();
  int array[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter the element " << i + 1 << ": ";
    cin >> array[i];
  }
  cout << "The elements of the array are: ";
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  cout << "\n";
  return 0;
}