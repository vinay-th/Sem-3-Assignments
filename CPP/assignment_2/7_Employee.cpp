// 7. Create a class employee with name, salary, age as member, use get_data()
// and show() functions. Display details of 3 manager employees.
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
  string name;
  float salary;
  int age;

public:
  void get_data() {
    cout << "\nEnter the name of the employee: ";
    cin >> name;
    cout << "\nEnter the salary of the employee: ";
    cin >> salary;
    cout << "\nEnter the age of the employee: ";
    cin >> age;
  }
  void show() {
    cout << "\nName: " << name;
    cout << "\nSalary: " << salary;
    cout << "\nAge: " << age;
  }
};

int main() {
  Employee managers[3];

  cout << "Enter the data of 3 managers: \n\n";
  for (int i = 0; i < 3; i++) {
    managers[i].get_data();
  }
  cout << "Entered data of 3 managers: \n\n";

  for (int i = 0; i < 3; i++) {
    managers[i].show();
  }

  cout << "\n";
  return 0;
}