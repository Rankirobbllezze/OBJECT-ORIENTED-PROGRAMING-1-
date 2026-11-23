#include <iostream>
using namespace std;

int main() {
    string employeeName;
    double basicsalary, bonus, totalSalary;

    cout << "======Employee Bonus System======" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter details for employee " << i << ":" << endl;
        cout << "Enter employee name: ";
        cin >> employeeName;
        cout << "Enter basic salary: ";
        cin >> basicsalary;
        
        //Calculate bonus and total salary
        bonus = 0.05 * basicsalary;
        totalSalary = basicsalary + bonus;

        //Display employee details
        cout << "\n===== EMPLOYEE DETAILS =====" << endl;
        cout << "Employee name: " << employeeName << endl;
        cout << "Basic salary:  " << basicsalary << endl;   
        cout << "Bonus (5%):         " << bonus << endl;
        cout << "Total salary:  " << totalSalary << endl;
        cout << "=============================" << endl;    

    }
    return 0;
}