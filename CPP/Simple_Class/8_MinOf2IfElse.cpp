#include <iostream>
using namespace std;
class minOf2{
public:
    int a, b;
}obj;
int main() {

  cout << "\nEnter the value of A: ";
  cin >> obj.a;

  cout << "\nEnter the value of B: ";
  cin >> obj.b;

  cout << "\n\n------------- Min of 2 with If Else -----------------";

    if (obj.a <= obj.b){
        cout<<"\nA: "<<obj.a<<" is smallest than B: "<<obj.b;
    }else{
        cout<<"\nB: "<<obj.b<<" is smallest than A: "<<obj.a;
    }
    
  
  cout << "\n";
  return 0;
}