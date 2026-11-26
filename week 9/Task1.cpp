#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int admNumber;
    string studentClass;
    
    void displayStudent() {
        displayPerson();
        cout << "Admission Number: " << admNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student student1;
    
    cout << "Enter student name: ";
    cin >> student1.name;
    cout << "Enter student age: ";
    cin >> student1.age;
    cout << "Enter admission number: ";
    cin >> student1.admNumber;
    cin.ignore(); 
    cout << "Enter class: ";
    cin >> student1.studentClass;

    cout << "\n===== STUDENT DETAILS =====" << endl;
    student1.displayStudent();

    return 0;
}    