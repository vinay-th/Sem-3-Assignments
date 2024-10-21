// 13. Write an overloaded template function area that calculates area of
// different shapes.
#include <iostream>
using namespace std;
template <typename T> 
T area(T height) { 
  return height * height; 
}

template <typename T> 
T area(T height, T width) { 
  return height * width; 
}

template <typename T> 
T area(T length, T width, T height) {
  return length * width * height;
}
int main() {
  cout << "In int: \n";
  cout << "Area of a rectangle is: " << area(5) << endl;
  cout << "Area of a square is: " << area(5, 5) << endl;
  cout << "Area of a triangle is: " << area(5, 5, 5) << endl;

  cout << "In float: \n";
  cout << "Area of a rectangle is: " << area(5.5) << endl;
  cout << "Area of a square is: " << area(5.5, 5.5) << endl;
  cout << "Area of a triangle is: " << area(5.5, 5.5, 5.5) << endl;

  cout << "\n";
  return 0;
}