#include <iostream>
using namespace std;

int main() {
    double number1;
    double number2;
    char operation;
    double result;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> number2;

    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << number1 << " + " << number2 << " = " << result << '\n';
            break;
        case '-':
            result = number1 - number2;
            cout << "Result: " << number1 << " - " << number2 << " = " << result << '\n';
            break;
        case '*':
            result = number1 * number2;
            cout << "Result: " << number1 << " * " << number2 << " = " << result << '\n';
            break;
        case '/':
            if (number2 == 0) {
                cout << "Error: division by zero is not allowed.\n";
            } else {
                result = number1 / number2;
                cout << "Result: " << number1 << " / " << number2 << " = " << result << '\n';
            }
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /.\n";
            return 1;
    }

    return 0;
}