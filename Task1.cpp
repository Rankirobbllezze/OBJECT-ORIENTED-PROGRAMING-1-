
#include <iostream>
using namespace std;

void getEmployeeDetails(string& employeeName, double& basicSalary,
                        double& overtimeHours, double& ratePerHour) {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(const string& employeeName, double basicSalary,
                    double overtimeHours, double ratePerHour,
                    double overtimePay, double netSalary) {

    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
    cout << "Employee name:       " << employeeName << '\n';
    cout << "Basic salary:        " << basicSalary << '\n';
    cout << "Overtime hours:      " << overtimeHours << '\n';
    cout << "Overtime rate/hour:  " << ratePerHour << '\n';
    cout << "Overtime pay:        " << overtimePay << '\n';
    cout << "Net salary:          " << netSalary << '\n';
    cout << "======================================\n";
}

int main() {
    string employeeName;
    double basicSalary;
    double overtimeHours;
    double ratePerHour;

    getEmployeeDetails(employeeName, basicSalary, overtimeHours, ratePerHour);

    double overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(employeeName, basicSalary, overtimeHours, ratePerHour,
                   overtimePay, netSalary);

    return 0;
}