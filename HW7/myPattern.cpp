#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int rows = 153;  // Number of rows in the grid
    const int cols = 300;  // Number of columns in the grid

    // Initialize the grid with spaces
    char grid[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            grid[i][j] = ' ';  // Fill all cells with spaces
        }
    }

    // Open the coordinates file
    ifstream inFile("coordinates.txt");
    if (!inFile) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    // Read the coordinates and mark the grid
    int row, col;
    while (inFile >> row >> col) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            grid[row][col] = '*';  // Mark the position with '*'
        }
    }
    inFile.close();

    // Open a file to save the grid
    ofstream outFile("myPattern.txt");
    if (!outFile) {
        cerr << "Error: Could not create the file." << endl;
        return 1;
    }

    // Print and save the grid
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j];          // Print to console
            outFile << grid[i][j];      // Save to file
        }
        cout << endl;                   // Newline for console
        outFile << endl;                // Newline for file
    }
    outFile.close();

    cout << "The mystery pattern has been saved to myPattern.txt" << endl;
    return 0;
}
