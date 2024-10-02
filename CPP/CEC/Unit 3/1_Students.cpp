// Write a C++ Program to enter 10 student details (Roll,Name) using array
// of Object.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
  int roll;
  string stuName;

public:
  void inputStudent(int num, string name) {
    roll = num;
    stuName = name;
  }
  void printStudents() {
    cout << "Roll: " << roll << endl;
    cout << "Name: " << stuName << endl;
    cout << endl;
  }
};
int main() {
  int a, n;
  string s;

  cout << "Enter the num of students: ";
  cin >> n;

  Student students[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter the roll of " << i + 1 << " student : ";
    cin >> a;
    cout << "Enter the name of " << i + 1 << " student : ";
    cin >> s;
    students[i].inputStudent(a, s);
  }

  for (int i = 0; i < n; i++) {
    cout << "Student " << i + 1 << endl;
    students[i].printStudents();
  }

  cout << endl;
  return 0;
}