#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    char name[50];
    char regNumber[20];
    float totalMarks;
};

int main(int argc, char* argv[]) {
    ifstream inFile("results.dat", ios::binary);

    if (!inFile && argc > 0 && argv[0] != nullptr) {
        string exePath = argv[0];
        size_t separator = exePath.find_last_of("\\/");
        if (separator != string::npos) {
            inFile.clear();
            inFile.open(exePath.substr(0, separator + 1) + "results.dat",
                       ios::binary);
        }
    }

    if (!inFile) {
        cout << "Error: results.dat could not be found." << endl;
        return 1;
    }

    Student s;
    cout << "Student Exam Results:" << endl;

    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        s.name[sizeof(s.name) - 1] = '\0';
        cout << "Name: " << s.name << " | Marks: "
             << s.totalMarks << endl;
    }

    if (inFile.gcount() != 0) {
        cerr << "Error: results.dat contains an incomplete student record."
             << endl;
        return 1;
    }

    return 0;
}