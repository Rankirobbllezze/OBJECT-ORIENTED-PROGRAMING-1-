#include <iostream>
using namespace std;

class Student {
    string name;
    int admissionNumber;
    double balance;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter admission number: ";
        cin >> admissionNumber;
        cout << "Enter fee balance: ";
        cin >> balance;
    }  
    
    void makePayment() {
        double amount;
        cout << "Enter amount Paid: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Payment successful." << endl;
        } else {
            cout << "Invalid payment amount. "<< endl;
        }
    }
    void displayDetails() {
        cout << "\n===== STUDENT DETAILS =====\n";
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Fee Balance: " << balance << endl;
    }
};

int main() {
    Student student1;
    student1.inputDetails();
    student1.makePayment();
    student1.displayDetails();

    return 0;
}
