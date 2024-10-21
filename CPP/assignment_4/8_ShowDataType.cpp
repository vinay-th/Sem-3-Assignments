// 8 Write a program to show values of different data types using templates and
// constructor
#include <iostream>
using namespace std;

template <typename T> class DataType {
  T data;

public:
  DataType(T data) { this->data = data; }
  void display() {
    cout << "\nData Type: " << typeid(data).name() << "\n";
    cout << "Data: " << data << "\n";
  }
};

int main() {
  DataType<int> obj1(10);
  DataType<float> obj2(10.5);
  DataType<char> obj3('a');

  obj1.display();
  obj2.display();
  obj3.display();

  cout << "\n";
  return 0;
}