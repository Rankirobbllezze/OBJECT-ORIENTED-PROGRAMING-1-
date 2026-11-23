#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter book author: ";
        cin >> author;
        cout << "Enter Copies Available: ";
        cin >> copies;
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "No copies Available.\n";
        }
    }

    void dislayDetails() {
        cout << "\n===== BOOK DETAILS =====\n";
        cout << "Title:  " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main() {
    Book book1;
    book1.inputDetails();
    book1.borrowBook();
    book1.dislayDetails();

    return 0;
}