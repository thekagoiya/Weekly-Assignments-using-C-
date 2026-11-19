
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    // Input book details
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter copies available: ";
        cin >> copiesAvailable;
    }

    // Borrow a book
    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book borrowed successfully.\n";
        }
        else {
            cout << "No copies available.\n";
        }
    }

    // Display book details
    void displayDetails() {
        cout << "\nBOOK DETAILS\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};

int main() {
    Book book1;

    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();

    return 0;
}
