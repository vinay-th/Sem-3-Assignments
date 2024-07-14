#include <iostream>
using namespace std;
class Assignment{
public:
    int a;
    int b;
}assi;
int main(){
    cout<<"\nEnter your number: ";
    cin >> assi.a;
    cout<<"\nEnter your number: ";
    cin >> assi.b;

    cout<<"\n-------------------Conditional Operation----------------";
    cout<<"\n\n";
    
    cout << "\n\n------------- = Operator --------------------";
    cout << "\n\nValue of A before assigning: " << assi.a;
    assi.a = assi.b;
    cout << "\nValue of A after assigning: " << assi.a;

    cout << "\n\n------------- += Operator --------------------";
    cout << "\n\nValue of A before (+=) : " << assi.a;
    assi.a += assi.b;
    cout << "\nValue of A after (+=): " << assi.a;

    cout << "\n\n------------- -= Operator --------------------";
    cout << "\n\nValue of A before (-=) : " << assi.a;
    assi.a -= assi.b;
    cout << "\nValue of A after (-=): " << assi.a;

    cout << "\n\n------------- *= Operator --------------------";
    cout << "\n\nValue of A before (*=) : " << assi.a;
    assi.a *= assi.b;
    cout << "\nValue of A after (*=): " << assi.a;

    cout << "\n\n------------- /= Operator --------------------";
    cout << "\n\nValue of A before (/=) : " << assi.a;
    assi.a /= assi.b;
    cout << "\nValue of A after (/=): " << assi.a;

    cout << "\n\n------------- %= Operator --------------------";
    cout << "\n\nValue of A before (%=) : " << assi.a;
    assi.a %= assi.b;
    cout << "\nValue of A after (%=): " << assi.a;
    cout << "\n";

  return 0;
}