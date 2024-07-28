// 3. Write a C++ program using Switch statement example to generate days of the
// week
#include <iostream>
using namespace std;

class Days {
public:
  void findDay(int x) {
    switch (x) {
    case 1:
      cout << "\nSunday";
      break;
    case 2:
      cout << "\nMonday";
      break;
    case 3:
      cout << "\nTuesday";
      break;
    case 4:
      cout << "\nWednesday";
      break;
    case 5:
      cout << "\nThursday";
      break;
    case 6:
      cout << "\nFriday";
      break;
    case 7:
      cout << "\nSaturday";
      break;

    default:
      cout << "\nEnter a valid number.";
      break;
    }
  }
};

int main() {
  Days obj;

  cout << "\n-------------To find the day-------------";
  int a;
  cout << "\n\nEnter the number of the day: ";
  cin >> a;

  obj.findDay(a);

  cout << "\n";
  return 0;
}