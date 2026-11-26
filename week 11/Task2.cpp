#include <iostream>
using namespace std;    

class Student {
private:
    string studentName;
    int admNumber;
    double feeBalance;

public:
   void inputStudentData() {
       cout << "Enter student Name:";
       cin >> studentName;
       cout << "Enter admission number:";
       cin >> admNumber;    
       cout << "Enter fee balance:";
       cin >> feeBalance;   
   }    

    void makePayment() {
        double amountPaid;
        cout << "Enter amount to pay:";
        cin >> amountPaid;

        if (amountPaid > 0 && amountPaid <= feeBalance) {
            feeBalance = feeBalance - amountPaid;
            cout << "Payment successful! "<< endl;
        } else {
            cout << "Invalid payment amount. Payment failed." << endl;
        }
    }
    
    void displayStatus() {
        cout << "\n===== STUDENT FEE STATUS =====" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }

};

int main() {
    Student student;
    student.inputStudentData();
    student.makePayment();
    student.displayStatus();

    return 0;
}