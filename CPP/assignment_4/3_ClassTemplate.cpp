// 3. Write a program to create a class template for the ‘Array’ class.
#include <iostream>
using namespace std;
template <class C> class Array {
  C *arr;
  int size;

public:
  Array(int size) {
    this->size = size;
    arr = new C[size];
    for (int i = 0; i < size; i++) {
      arr[i] = i;
    }
  }
  ~Array() { delete[] arr; }
  void display() {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
};
int main() {
  Array<int> obj(5);
  //   Array<float> obj2(5);
  obj.display();
  cout << "\n";
  return 0;
}