// 11. Write a program to create template class to find binary value of a number
// given by user
#include <iostream>
using namespace std;
template <typename T> class BinaryConverter {
public:
  void convertBinary(T num) {
    T rem = 0;
    int base = 2;
    for (int i = num; i != 0; i /= base) {
      rem = i % base;
      cout << rem;
    }
  }
};
int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  BinaryConverter<int> obj;
  obj.convertBinary(num);

  cout << "\n";
  return 0;
}