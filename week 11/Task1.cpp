#include <iostream>
using namespace std;

class Employee {
private:
    string employeeeName;
    int employeeId;
    double basicSalary;
    
public:
    void getEmployeeDetails() {
        cout << "Enter employee name: ";
        cin >> employeeeName;
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }
    
    double calculateSalary() {
        double netSalary = basicSalary + (basicSalary * 0.1); 
        return netSalary;
    }

    void displaySalaryDetails() {
        cout << "\n===== EMPLOYEE SALARY DETAILS =====" << endl;
        cout << "Employee Name: " << employeeeName << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Basic Salary: " << basicSalary << endl;    
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee emp;
    emp.getEmployeeDetails();
    emp.displaySalaryDetails();

    return 0;
}