
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string bookTitle;

    // Open file in append mode
    ofstream file("borrowed_books.txt", ios::app);

    if (!file) {
        cout << "Error opening file.\n";
        return 1;
    }

    cout << "Enter borrowed book title: ";
    getline(cin, bookTitle);

    // Store book title in file
    file << bookTitle << endl;

    cout << "Book title successfully stored.\n";

    // Close file
    file.close();

    return 0;
}
