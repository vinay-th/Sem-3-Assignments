// 2. Write a c++ Program to illustrate the traversal of a 2D Array.
#include <iostream>
using namespace std;
class Array {
public:
  int userRow() {
    int size;
    cout << "Enter the size of row of the array: ";
    cin >> size;
    return size;
  }
  int userColumn() {
    int size;
    cout << "Enter the size of column of the array: ";
    cin >> size;
    return size;
  }
};
int main() {
  Array obj;
  int row = obj.userRow();
  int column = obj.userColumn();
  int array[row][column];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << "Enter the element " << i + 1 << " " << j + 1 << ": ";
      cin >> array[i][j];
    }
  }
  cout << "The elements of the array are: " << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
  cout << "\n";
  return 0;
}