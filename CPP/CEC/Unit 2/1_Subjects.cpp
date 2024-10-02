// Write a C++ to create a class Subject to print the detail of Subject Code,
// Subject Name using objects.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Subjects {
private:
  int subjectCode;
  string subjectName;

public:
  Subjects(int code, string name) {
    subjectCode = code;
    subjectName = name;
  }
  void print() {
    cout << "The subject code is : " << subjectCode << endl;
    cout << "The subject name is : " << subjectName << endl;
  }
};
int main() {
  int code, num;
  string name;

  cout << "Enter the number of subjects you want to enter: ";
  cin >> num;
  vector<Subjects> sub;

  for (int i = 0; i < num; i++) {
    cout << "Enter the subject code for subject " << i + 1 << ": ";
    cin >> code;
    cout << "Enter the subject name for subject " << i + 1 << ": ";
    cin >> name;
    sub.push_back(Subjects(code, name));
    cout << endl;
  }

  cout << "\nSubject details: \n";
  for (int i = 0; i < num; i++) {
    sub[i].print();
    cout << endl;
  }

  cout << "\n";
  return 0;
}