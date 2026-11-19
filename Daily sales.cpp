
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double amount;
    double totalSales = 0;

    // Open sales file for reading
    ifstream file("sales.txt");

    if (!file) {
        cout << "Error opening sales.txt\n";
        return 1;
    }

    // Read all transactions
    while (file >> amount) {
        totalSales += amount;
    }

    // Display total sales
    cout << "Total Sales for the Day: "
         << totalSales << endl;

    // Close file
    file.close();

    return 0;
}
