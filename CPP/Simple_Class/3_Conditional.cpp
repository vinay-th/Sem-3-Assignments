#include <iostream>
using namespace std;
class Conditional{
public:
    int a;
    int b;
}cond;
int main(){
    cout<<"\nEnter your number: ";
    cin >> cond.a;
    cout<<"\nEnter your number: ";
    cin >> cond.b;

    cout<<"\n-------------------Conditional Operation----------------";
    cout<<"\n\n";
    
    cout << "\n\n------------- Greater Than(>) --------------------";
    if (cond.a > cond.b) {
        cout << "\nA is greater than B";
    } else {
        cout << "\nA is not greater than B";
    }

    cout << "\n\n------------- Smaller Than(<) --------------------";
    if (cond.a < cond.b) {
        cout << "\nA is smaller than B";
    } else {
        cout << "\nA is not smaller than B";
    }

    cout << "\n\n------------- Equal Number(==) --------------------";
    if (cond.a == cond.b) {
        cout << "\nA is equal to B";
    } else {
        cout << "\nA is not equal to B";
    }
    cout << "\n\n------------- Smaller Than or Equal(<=) --------------------";
    if (cond.a < cond.b) {
        cout << "\nA is smaller than or equal to B";
    } else {
        cout << "\nA is not smaller than or equal to B";
    }

    cout << "\n\n------------- Greatest Than or Equal(<=) --------------------";
    if (cond.a < cond.b) {
        cout << "\nA is greater than or equal to B";
    } else {
        cout << "\nA is not greater than or equal to B";
    }

  return 0;
}