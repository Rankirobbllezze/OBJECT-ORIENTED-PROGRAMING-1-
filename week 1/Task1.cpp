#include <iostream>
using namespace std;

int main() {
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;

    cout << "Enter customer name: ";
    cin >> customerName;

    cout << "Enter phone model purchased: ";
    cin >> phoneModel;

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    double totalSalesAmount = quantity * pricePerPhone;

    
    cout << "\n========== SALES RECEIPT ==========\n";
    cout << "Customer name:       " << customerName << '\n';
    cout << "Phone model:         " << phoneModel << '\n';
    cout << "Quantity bought:     " << quantity << '\n';
    cout << "Price per phone:     " << pricePerPhone << '\n';
    cout << "Total sales amount:  " << totalSalesAmount << '\n';
    cout << "===================================\n";

    return 0;
}