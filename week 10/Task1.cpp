#include <iostream>
using namespace std;

class Payment {
public:
    // cash payment
    void proccessPayment(int amount) {
        cout << "Cash payment Final Amount: " << amount << endl;
    }

    // card payment
    void proccessPayment(double amount,  double fee) {
        double finalAmount = amount + fee;
        cout << "Card payment Final Amount: " << finalAmount << endl;
    }

    // mobile payment
    void proccessPayment(double amount, double fee, double discount) {
        double finalAmount = amount + fee - discount;
        cout << "Mobile payment Final Amount: " << finalAmount << endl;
    }
};

int main() {
    Payment pay;

    pay.proccessPayment(1110);
    pay.proccessPayment(1810.00, 50.00);
    pay.proccessPayment(2810.00, 40.00, 100.00);
    return 0;
}