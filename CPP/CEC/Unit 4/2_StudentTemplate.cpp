#include <iostream>
using namespace std;
template <typename T1, typename T2, typename T3> class Student {
private:
  T1 rollNum;
  T2 name;
  T3 marks;

public:
  Student(T1 r, T2 n, T3 m) : rollNum(r), name(n), marks(m) {}
  void displayDetails() {
    cout << "Student Roll Number: " << rollNum << endl;
    cout << "Student Name: " << name << endl;
    cout << "Student Marks: " << marks << endl;
  }
};
int main() {
  Student<int, string, float> student1(101, "Vinay", 97.8);
  Student<int, string, int> student2(102, "Vansh", 88);

  cout << "Details of student 1: " << endl;
  student1.displayDetails();
  cout << "\n";

  cout << "Details of student 2: " << endl;
  student2.displayDetails();
  cout << "\n";

  cout << "\n";
  return 0;
}