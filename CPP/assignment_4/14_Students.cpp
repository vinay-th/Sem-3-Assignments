// 14. Write a program that has a template class STUDENT to read and print the
// details of student. Use multiple arguments.
#include <iostream>
using namespace std;
template <typename T1, typename T2> class Student {
  T1 roll;
  T2 name;

public:
  Student(T1 roll, T2 name) {
    this->roll = roll;
    this->name = name;
  }
  void display() {
    cout << "Roll No: " << roll << "\n";
    cout << "Name: " << name << "\n\n";
  }
};
int main() {
  Student stu1(101, "Vinay");
  Student stu2(102, "Niomi");
  Student stu3(103, "Vansh");
  Student stu4(104, "Sarthak");
  Student stu5(10.5, "Malilka");

  stu1.display();
  stu2.display();
  stu3.display();
  stu4.display();
  stu5.display();

  cout << "\n";
  return 0;
}