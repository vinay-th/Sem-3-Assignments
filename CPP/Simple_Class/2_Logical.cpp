#include <iostream>
using namespace std;
class Logical{
public:
    int a;
    int b;
}logic;
int main(){
    cout<<"\nEnter your number: ";
    cin >> logic.a;
    cout<<"\nEnter your number: ";
    cin >> logic.b;

    cout<<"\n-------------------Logical Operation----------------";
    cout<<"\n\n";
    
    cout << "\n\n------------- && Operator w.r.t 5 --------------------";
  if (logic.a > 5 && logic.b > 5) {
    cout << "\nBoth values are greater than 5";
  } else {
    cout << "\nBoth values are not greater than 5";
  }

  cout << "\n\n------------- || Operator w.r.t 5 --------------------";
  if (logic.a > 5 || logic.b > 5) {
    cout << "\nEither value is greater than 5";
  } else {
    cout << "\nEither values are not greater than 5";
  }

  cout << "\n\n------------- ! Operator w.r.t 5 --------------------";
  if (!(logic.a > 5)) {
    cout << "\nValue of A= " << logic.a << " is greater than 5";
  } else {
    cout << "\nValue of A= " << logic.a << " is not greater than 5\n\n";
  }

  return 0;
}