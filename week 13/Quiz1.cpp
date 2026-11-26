#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("borrowe_books.txt", ios::app);

    if (!outFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string bookTitle;
    cout << "Enter the title of the book: ";
    getline(cin, bookTitle);

    outFile << bookTitle << endl;
    outFile.close();

    cout << "Book title successfully stored !" << endl;

    return 0;

}

