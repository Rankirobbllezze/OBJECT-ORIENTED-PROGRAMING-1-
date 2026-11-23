#include <iostream>
using namespace std;

int main() {
    double balance = 5000.00; // initial balance
    double withdrawAmount;

    cout << "====== Mobile Money Savings Withdrawal ====="<< endl;
    cout << "Current Balance: " << balance << endl;

    while (balance > 0) {
        cout << "\nEnter amount to Withdraw:";
        cin >> withdrawAmount;

        //stop if withdrawal exceeds available balance
        if (withdrawAmount > balance) {
            cout << "Insufficient balance. Transaction Ended" << endl;
            break;
        }

        if (withdrawAmount <= 0) {
            cout << "Please Enter a valid Amount greater than 0." << endl;
            continue;
        }

        //Deduct and dislay the remaining balance
        balance -= withdrawAmount;
        cout << "Withdrawal Successfull! Remaining balance: " << balance << endl;

    }
    if (balance == 0){
        cout << "\nYour account balance is now 0.00. No further withdrawals allowed." << endl;

    }
    return 0;
}