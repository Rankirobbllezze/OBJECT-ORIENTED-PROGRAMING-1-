#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    //1D Array: Weekly Revenue
    double revenue[7];
    double total = 0;

    for (int i=0; i<7; i++){
        cout << "Enter revenue for the day" <<i + 1<< ":";
        cin >> revenue[i];
        total += revenue[i];

    }
    cout << "Total weekly revenue:" << total << endl;
    cout << "Average daily revenue:" << total/7 << endl;

    //2D Array one branch(5 floors,10 rooms)
    int occupancy[5][10];

    for (int f=0; f<5; f++){
        int occupied = 0;
        for (int r=0; r<10; r++){
            occupancy[f][r] = rand() % 2; //1 = occupied, 0 = vacant
            if (occupancy[f][r] == 1)
                occupied++;
        }
        cout << "Floor " << f + 1 << " : Occupied =" << occupied << ", Vacant =" << 10 - occupied << endl;
    }

    //3D Array: 3branches
    int chain[3][5][10]; 
    int totalOccupied = 0;

    for (int b=0; b<3; b++){
        for (int f=0; f<5; f++){
            for (int r=0; r<10; r++){
                chain[b][f][r] = rand() % 2; 
                if (chain[b][f][r] == 1)
                    totalOccupied++;
            }
        }
    }
    cout << "Total occupied rooms across all branches: " << totalOccupied << endl;

    return 0;
}