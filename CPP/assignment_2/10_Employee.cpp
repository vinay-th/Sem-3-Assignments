// 10. Write a C++ Program to create a class employee to print the detail of
// employees using objects
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
  string name;
  int id;
  double salary;

public:
  void getData(string empName, int empId, double empSalary) {
    name = empName;
    id = empId;
    salary = empSalary;
  }

  void showData() {
    cout << "\nName: " << name;
    cout << "\nID: " << id;
    cout << "\nSalary: " << salary << endl;
  }
};

int main() {
  Employee emp1, emp2, emp3;

  emp1.getData("Niomi", 101, 50000);
  emp2.getData("Vinay", 102, 60000);
  emp3.getData("Vansh", 103, 55000);

  cout << "\n\nEmployee 1 details:";
  emp1.showData();

  cout << "\n\nEmployee 2 details:";
  emp2.showData();

  cout << "\n\nEmployee 3 details:";
  emp3.showData();

  return 0;
}
