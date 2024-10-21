// 10. Write a C++ program that reads a list of integers from the user and
// throws an exception if any numbers are duplicates.
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number of elements of the array: ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter the " << i + 1 << " element of the array: ";
    cin >> arr[i];
  }
  try {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (arr[i] == arr[j]) {
          throw runtime_error("Duplicate element found");
        }
      }
    }
  } catch (const runtime_error &e) {
    cout << e.what() << '\n';
  }

  cout << "\n";
  return 0;
}