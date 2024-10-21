// 7.
// Write a C++ program to take a account no, balance and withdraw amount. If
// amount is less than balance then raise an exception. Note : If exception is
// raised, user need to enter withdraw amount again till the exception resolves.
#include <iostream>
using namespace std;
int main() {
  int acc_no, bal, amt;
  cout << "Enter the account no: ";
  cin >> acc_no;
  cout << "Enter the balance: ";
  cin >> bal;

  while (true) {
    try {
      cout << "\nEnter the withdraw amount: ";
      cin >> amt;
      if (amt > bal)
        throw 0;
      cout << "Withdraw amount is valid";
      break;
    } catch (int e) {
      cout << "Enter a valid withdraw amount" << endl;
    }
  }

  cout << "\n";
  return 0;
}