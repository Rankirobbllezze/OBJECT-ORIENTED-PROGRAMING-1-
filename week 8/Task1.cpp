#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account created successfully!" << endl;
    }

    void displayAccount() {
        cout << "\n===== ACCOUNT DETAILS =====" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }

    ~BankAccount() {
        cout << "Account closed successfully!" << endl;
    }
};

int main() {
   BankAccount acc1("Alenga Josh", 2627288, 262728.00);
   acc1.displayAccount();

    return 0;
}