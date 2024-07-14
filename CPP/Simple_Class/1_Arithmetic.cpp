#include <iostream>
using namespace std;
class Arithmetic{
public:
    int a;
    int b;
}arth;
int main(){
    cout<<"\nEnter your number: ";
    cin >> arth.a;
    cout<<"\nEnter your number: ";
    cin >> arth.b;

    cout<<"\n-------------------Arithmatic Operation----------------";
    cout<<"\n\n";
    
    cout << "\n\n--------------------- Addition ---------------------------";
    cout << "\n\nThe value of A is: " << arth.a;
    cout << "\nThe value of B is: " << arth.b;
    cout << "\nThe value of addition is: " << arth.a + arth.b;

    cout << "\n\n------------------- Substraction -------------------------";
    cout << "\n\nThe value of A is: " << arth.a;
    cout << "\nThe value of B is: " << arth.b;
    cout << "\nThe value of substraction is: " << arth.a - arth.b;

    cout << "\n\n--------------------- multiplication ---------------------------";
    cout << "\n\nThe value of A is: " << arth.a;
    cout << "\nThe value of B is: " << arth.b;
    cout << "\nThe value of multiplication is: " << arth.a * arth.b;

    cout << "\n\n--------------------- division ---------------------------";
    cout << "\n\nThe value of A is: " << arth.a;
    cout << "\nThe value of B is: " << arth.b;
    cout << "\nThe value of division is: " << arth.a / arth.b;

    cout << "\n\n--------------------- modulo ---------------------------";
    cout << "\n\nThe value of A is: " << arth.a;
    cout << "\nThe value of B is: " << arth.b;
    cout << "\nThe value of modulo is: " << arth.a % arth.b;
}