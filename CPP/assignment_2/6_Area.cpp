#include <cmath>
#include <iostream>


using namespace std;

class Area {
public:
  void calculate(int a) { cout << "\nArea of square is " << a * a; }

  void calculate(int a, int b) { cout << "\nArea of rectangle is " << a * b; }

  void calculate(double r) { cout << "\nArea of circle is " << M_PI * r * r; }
};

int main() {
  int opr, a, b;
  double r;
  Area areaObj;

  cout << "\n1. Calculate area of square";
  cout << "\n2. Calculate area of rectangle";
  cout << "\n3. Calculate area of circle";
  cout << "\nEnter your choice: ";
  cin >> opr;

  switch (opr) {
  case 1:
    cout << "Enter the side of the square: ";
    cin >> a;
    areaObj.calculate(a);
    break;
  case 2:
    cout << "Enter the length of the rectangle: ";
    cin >> a;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;
    areaObj.calculate(a, b);
    break;
  case 3:
    cout << "Enter the radius of the circle: ";
    cin >> r;
    areaObj.calculate(r);
    break;
  default:
    cout << "Enter valid number.";
    break;
  }

  cout << "\n";
  return 0;
}
