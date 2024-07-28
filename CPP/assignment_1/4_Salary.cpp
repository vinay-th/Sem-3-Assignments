// 4. Write a C++ Program to enter salary and output income tax and net salary.
#include <iostream>
using namespace std;

class Salary {
public:
  void salaryCal(float sal) {
    float it, netSal;
    cout << "\n\nYour basic salary is: " << sal;
    cout << "\nEnter income tax(in percentage): ";
    cin >> it;
    netSal = sal + sal * it / 100;
    cout << "\n\nYour net salary after " << it << "% IT is : " << netSal;
  }
};

int main() {
  Salary obj;

  int sal;
  cout << "\nEnter your salary: ";
  cin >> sal;

  obj.salaryCal(sal);

  cout << "\n";
  return 0;
}