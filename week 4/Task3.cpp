#include <iostream>
using namespace std;

int main(){
    const string correctUser = "admin";
    const string correctPass = "1234";

    string enteredUser, enteredPass;
    bool isAuthenticated = false;

    cout << "====== System Login ======" << endl;

    do {
        cout << "Enter username: ";
        cin >> enteredUser;
        cout << "Enter password: ";
        cin >> enteredPass;

        if (enteredUser == correctUser && enteredPass == correctPass) {
            cout << "Access granted. Welcome" << endl;
            isAuthenticated = true;
        } else {
            cout << "Access denied. Invalid username or password. Please try again." << endl;
        }

} while (!isAuthenticated);

return 0;
}