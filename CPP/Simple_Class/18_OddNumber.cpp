#include <iostream>
using namespace std;

class OddNumbers {
public:
  OddNumbers(int start, int end) {
    cout << "\n-------Odd Numbers in the range " << start << " to " << end
         << "-----------\n";
    for (int i = start; i <= end; ++i) {
      if (i % 2 != 0) {
        cout << i << " ";
      }
    }
    cout << "\n";
  }
};

int main() {
  int start, end;
  cout << "Enter the start of the range: ";
  cin >> start;
  cout << "Enter the end of the range: ";
  cin >> end;

  OddNumbers oddNumbers(start, end);
  return 0;
}
