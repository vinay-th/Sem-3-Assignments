// 5. Write a C++ program to Enter array elements and print those elements.
#include <iostream>
using namespace std;
class UserArray {
public:
  int arr[100];
  int size;
  void userArray() {
    cout << "Enter the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
      cout << "Enter the value of " << i << " element of array: ";
      cin >> arr[i];
    }
  }
};

int main() {
  UserArray obj;
  obj.userArray();
  cout << "The array is: ";
  for (int i = 0; i < obj.size; i++) {
    cout << obj.arr[i] << " ";
  }

  cout << "\n";
  return 0;
}