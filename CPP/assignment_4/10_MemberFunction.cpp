// 10. Write a program to define definition of member function template outside
// the class and invoke the function.
#include <iostream>
using namespace std;
class MyClass {
private:
  int password = 10;

public:
  void display() { cout << "Hello World" << endl; }
  template <typename T> 
  friend void dataShow(T &obj);
};
template <typename T> 
void dataShow(T &obj) {
  obj.display();
  cout << "The password is: " << obj.password << endl;
}
int main() {
  MyClass obj;
  dataShow(obj);

  cout << "\n";
  return 0;
}