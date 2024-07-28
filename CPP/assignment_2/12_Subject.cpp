// 12. Write a C++ to create a class Subject to print the detail of Subject
// Code, Subject Name using objects.
#include <iostream>
#include <string>
using namespace std;

class Subject {
private:
  string name;
  int code;

public:
  void getData(string subName, int subCode) {
    name = subName;
    code = subCode;
  }
  void showData() {
    cout << "\nSubject details---->\n";
    cout << "\nName: " << name;
    cout << "\nCode: " << code;
  }
};

int main() {
  Subject sub;

  sub.getData("OOPS", 101);

  sub.showData();

  cout << "\n";
  return 0;
}