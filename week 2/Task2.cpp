#include <iostream>
using namespace std;

int main() {
    string studentName;
    int age;
    double examScore;
    string decision;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    if (age >= 18) {
        if (examScore >= 50) {
            decision = "Admitted";
        } else {
            decision = "Not Admitted: Low Score";
        }
    } else {
        decision = "Not Admitted: Underage";
    }

    cout << "\n===== ADMISSION DECISION =====\n";
    cout << "Student name: " << studentName << '\n';
    cout << "Decision:     " << decision << '\n';
    cout << "==============================\n";

    return 0;
}