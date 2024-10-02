// Write a C++ Program to find the cube of a number using Inline Function
#include <iostream>
#include <math.h>
using namespace std;
class Cube {
public:
  int cubeIt(int num) { return pow(num, 3); };
};
int main() {
  int n;
  cout << "Enter a number to find it's cube: ";
  cin >> n;

  Cube obj;
  cout << "\nCube of " << n << " is " << obj.cubeIt(n) << endl;

  cout << endl;
  return 0;
}