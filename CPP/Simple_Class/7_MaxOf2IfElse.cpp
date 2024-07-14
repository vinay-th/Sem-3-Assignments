#include <iostream>
using namespace std;
class maxOf2{
public:
    int a, b;
}obj;
int main() {

  cout << "\nEnter the value of A: ";
  cin >> obj.a;

  cout << "\nEnter the value of B: ";
  cin >> obj.b;

  cout << "\n\n------------- Max of 2 with If Else -----------------";

    if (obj.a >= obj.b){
        cout<<"\nA: "<<obj.a<<" is greater than B: "<<obj.b;
    }else{
        cout<<"\nB: "<<obj.b<<" is greater than A: "<<obj.a;
    }
    
  
  cout << "\n";
  return 0;
}