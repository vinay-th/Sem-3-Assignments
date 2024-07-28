// 6. Write a C++ program to find the area of a circle.
#include <cmath>
#include <iostream>

using namespace std;

class Area {
public:
  float area(float r) { return M_PI * pow(r, 2); }
};

int main() {
  Area obj;
  float r;

  cout << "Enter the radius of the circle: ";
  cin >> r;

  cout << "The area of circle with " << r << " cm radius is " << obj.area(r);

  cout << "\n";
  return 0;
}