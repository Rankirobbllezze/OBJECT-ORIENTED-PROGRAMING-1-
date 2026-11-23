#include <iostream>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Enter a value from 0 to 100.\n";
        return 1;
    } else if (marks >= 70) {
        grade = 'A';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 50) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    cout << "\n===== STUDENT RESULTS =====\n";
    cout << "Student name: " << studentName << '\n';
    cout << "Exam marks:   " << marks << '\n';
    cout << "Grade:        " << grade << '\n';
    cout << "===========================\n";

    return 0;
}