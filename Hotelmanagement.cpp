// CT101/ G/26620/25
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // For random occupancy

    // ================= PART 1: 1D Array - Weekly Revenue =================
    cout << "=== PART 1: WEEKLY REVENUE TRACKER ===" << endl;
    double revenue[7];
    double total = 0;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for Day " << i + 1 << ": Ksh ";
        cin >> revenue[i];
        total += revenue[i];
    }

    double average = total / 7;

    cout << "\nTotal Weekly Revenue: Ksh " << total << endl;
    cout << "Average Daily Revenue: Ksh " << average << endl;

    // ================= PART 2: 2D Array - One Branch =================
    cout << "\n=== PART 2: ROOM OCCUPANCY - ONE BRANCH (5 Floors, 10 Rooms) ===" << endl;
    int occupancy[5][10];

    // Input random data (0 = vacant, 1 = occupied)
    cout << "Generating random occupancy data..." << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // Random 0 or 1
        }
    }

    // Display per floor
    for (int i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;
        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) occupied++;
            else vacant++;
        }
        cout << "Floor " << i + 1 << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    // ================= PART 3: 3D Array - Multiple Branches =================
    cout << "\n=== PART 3: HOTEL CHAIN - 3 BRANCHES ===" << endl;
    int chain[3][5][10];
    int totalOccupiedAll = 0;

    // Assign random occupancy
    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1) totalOccupiedAll++;
            }
        }
    }

    // Display per branch
    for (int b = 0; b < 3; b++) {
        int branchOccupied = 0;
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                if (chain[b][f][r] == 1) branchOccupied++;
            }
        }
        cout << "Branch " << b + 1 << ": Total Occupied = "
             << branchOccupied << " / 50 rooms" << endl;
    }

    cout << "\nTOTAL OCCUPIED ACROSS ALL BRANCHES: "
         << totalOccupiedAll << " / 150 rooms" << endl;

    return 0;
}

