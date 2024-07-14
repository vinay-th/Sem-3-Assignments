#include <iostream>
using namespace std;
class minMax{
public:
    int a, b, c, res;
}obj;
int main() {

  cout << "\nEnter the value of A: ";
  cin >> obj.a;

  cout << "\nEnter the value of B: ";
  cin >> obj.b;

  cout << "\nEnter the value of C: ";
  cin >> obj.c;

  cout << "\n\n------------- Min and Max of 3 -----------------";

  (obj.a > obj.b && obj.a > obj.c)? obj.res = obj.a : (obj.b > obj.c && obj.b < obj.a) ? obj.res = obj.b : obj.res = obj.c;

  cout<<"\nThe greatest number is: "<<obj.res;    
    
  
  cout << "\n";
  return 0;
}