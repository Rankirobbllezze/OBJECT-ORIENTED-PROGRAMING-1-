#include <iostream>
using namespace std;

class MedicalStaff {
protected:
    string staffName;
    int staffId;
    
public:
    virtual void calculateSalary() = 0; 
    
    void displayDetails() {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffId << endl;
    }
};

class Doctor : public MedicalStaff {
public:
    double basicSalary;
    double allowance;
    
    Doctor(string name, int id, double basic, double allow) {
        staffName = name;
        staffId = id;
        basicSalary = basic;
        allowance = allow;
    }

    void calculateSalary() {
        double total = basicSalary + allowance;
        cout << "Doctor's Total Salary: " << total << endl;
    }

};

class Nurse : public MedicalStaff {
public:
    double basicSalary;
    double overtimePay;
    
    Nurse(string name, int id, double basic, double overtime) {
        staffName = name;
        staffId = id;
        basicSalary = basic;
        overtimePay = overtime;
    }

    void calculateSalary() {
        double total = basicSalary + overtimePay;
        cout << "Nurse's Total Salary: " << total << endl;
    }
};

int main() {
    MedicalStaff* staffPtr;

    Doctor doc("Dr. Alenga", 101, 233300.00, 50000.00);
    Nurse nurse("Nurse Givens", 102, 150000.00, 20000.00);

    staffPtr = &doc;
    staffPtr->displayDetails();
    staffPtr->calculateSalary();

    cout << endl;

    staffPtr = &nurse;
    staffPtr->displayDetails();
    staffPtr->calculateSalary();

    return 0;
}