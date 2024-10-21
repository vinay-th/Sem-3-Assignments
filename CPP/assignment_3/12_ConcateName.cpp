// 12. Write a C++ Program for two string Name & Surname of a student and
// concate that two string.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string fname, lname;

  cout << "Enter the First Name: ";
  cin >> fname;
  cout << "Enter the Last Name: ";
  cin >> lname;

  cout << "\n";
  cout << "First Name: " << fname << "\n";
  cout << "Last Name: " << lname << "\n";

  string fullName = fname + " " + lname;
  cout << "Full Name: " << fullName << "\n";

  cout << "\n";
  return 0;
}