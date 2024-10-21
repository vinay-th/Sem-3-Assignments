// 11. Write a C++ Program to enter 10 student details (Roll,Name) using array
// of Object.
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
  int roll;
  string name;
  void display() {
    cout << "Roll No: " << roll << "\n";
    cout << "Name: " << name << "\n";
  }
};
int main() {
  int n;
  cout << "Enter the number of students: ";
  cin >> n;
  Student *stu = new Student[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the roll number of the student: ";
    cin >> stu[i].roll;
    cout << "Enter the name of the student: ";
    cin >> stu[i].name;
  }

  for (int i = 0; i < n; i++) {
    stu[i].display();
    cout << "\n";
  }

  cout;
  return 0;
};