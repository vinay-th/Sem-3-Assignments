// 8 Write a program to explain the concept of multiple catch statements on
// above program.
#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter a positive num: ";
  cin >> a;

  try {
    if (a < 0)
      throw invalid_argument("Negative value");
    else if (a == 0)
      throw runtime_error("The number is zero");
    else
      cout << "The number is positive";
  } catch (const runtime_error e) {
    cout << "Caught this error: " << e.what();
  } catch (const invalid_argument e) {
    cout << "Caught this error: " << e.what();
  }

  cout << "\n";
  return 0;
}