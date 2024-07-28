// 3. Design a class Student with private data members (name,Marks) and public
// member functions (setName, setMarks, getName, getMarks) to demonstrate Public
// and Private access specifiers
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  float marks;

public:
  void setName(string studentName) { name = studentName; }
  void setMarks(float studentMarks) { marks = studentMarks; }
  string getName() { return name; }
  float getMarks() { return marks; }
};

int main() {
  Student stu;
  float marks;
  string name;
  cout << "\nEnter the name that you want to set: ";
  cin >> name;
  cout << "\nEnter the marks that you want to set: ";
  cin >> marks;

  stu.setName(name);
  stu.setMarks(marks);

  cout << "\nName : " << stu.getName();
  cout << "\nMarks : " << stu.getMarks();
  cout << "\n";
  return 0;
}