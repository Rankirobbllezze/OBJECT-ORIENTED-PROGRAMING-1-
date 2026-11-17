
#include <iostream>
using namespace std;

void getCustomerDetails(string& customerName, double& unitsConsumed,
                        double& ratePerUnit) {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter number of units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
}

double calculateBill(double unitsConsumed, double ratePerUnit) {
    return unitsConsumed * ratePerUnit;
}

double applyDiscount(double bill, double unitsConsumed) {
    if (unitsConsumed > 100) {
        return bill * 0.10;
    }
    return 0.0;
}

void displayBill(const string& customerName, double unitsConsumed,
                 double billBeforeDiscount, double discount,
                 double finalAmount) {
    
    cout << "\n========== WATER BILL ==========\n";
    cout << "Customer name:              " << customerName << '\n';
    cout << "Units consumed:             " << unitsConsumed << '\n';
    cout << "Total bill before discount: " << billBeforeDiscount << '\n';
    cout << "Discount:                   " << discount << '\n';
    cout << "Final amount payable:       " << finalAmount << '\n';
    cout << "================================\n";
}

int main() {
    string customerName;
    double unitsConsumed;
    double ratePerUnit;

    getCustomerDetails(customerName, unitsConsumed, ratePerUnit);

    double billBeforeDiscount = calculateBill(unitsConsumed, ratePerUnit);
    double discount = applyDiscount(billBeforeDiscount, unitsConsumed);
    double finalAmount = billBeforeDiscount - discount;

    displayBill(customerName, unitsConsumed, billBeforeDiscount, discount,
                finalAmount);

    return 0;
}