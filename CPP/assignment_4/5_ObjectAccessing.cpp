// 5. Write a program to pass an object to template function and display its
// members.
#include <iostream>
using namespace std;
class Student {
public:
  int roll;
  string name;
  Student(int roll, string name) {
    this->roll = roll;
    this->name = name;
  }
  void display() {
    cout << "Roll No: " << roll << "\n";
    cout << "Name: " << name << "\n";
  }
};

template <typename T> void display(T &obj) { obj.display(); }

int main() {

  Student stu(10, "Vinay");
  display(stu);

  cout << "\n";
  return 0;
}