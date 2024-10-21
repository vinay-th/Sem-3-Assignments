// 10. Write a C++ program to enter employee details like name & Salary using
// Array of Object.
#include <iostream>
using namespace std;

class Employee {
public:
  string name;
  int salary;
  void display() {
    cout << "Name: " << name << "\n";
    cout << "Salary: " << salary << "\n";
  }
};

int main() {
  int n;
  cout << "Enter the number of employees: ";
  cin >> n;
  Employee emp[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the name of the employee: ";
    cin >> emp[i].name;
    cout << "Enter the salary of the employee: ";
    cin >> emp[i].salary;
  }
  for (int i; i < n; i++) {
    emp[i].display();
    cout << "\n";
  }

  cout << "\n";
  return 0;
}