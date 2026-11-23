#include <iostream>
using namespace std;

int main() {
    string studentName;
    double theoryMarks;
    double practicalMarks;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    double averageScore = (theoryMarks + practicalMarks) / 2.0;
    string result = averageScore >= 50 ? "Passed" : "Failed";
    
    cout << "\n===== DRIVING TEST RESULT =====\n";
    cout << "Student name:    " << studentName << '\n';
    cout << "Theory marks:    " << theoryMarks << '\n';
    cout << "Practical marks: " << practicalMarks << '\n';
    cout << "Average score:   " << averageScore << '\n';
    cout << "Result:          " << result << '\n';
    cout << "===============================\n";

    return 0;
}