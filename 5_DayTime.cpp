#include <iostream>
using namespace std;

class TimeManu {
public:
  void dayToWeek(int days) {
    float weeks = days / 7.0;

    cout << days << " number of days are " << weeks << " no of week(s)\n";
  }
  void dayToYear(int days) {
    float years = days / 365.0;

    cout << days << " number of days are " << years << " no of year(s)\n";
  }
};

int main() {
  TimeManu obj;
  int days;
  cout << "\n--------To convert days into year and week--------";
  cout << "\nEnter the number of days: ";
  cin >> days;

  obj.dayToWeek(days);
  obj.dayToYear(days);

  cout << "\n";
  return 0;
}