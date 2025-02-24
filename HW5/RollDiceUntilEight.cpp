#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
#include <iomanip> // For setprecision()
using namespace std;

// Simulates rolling two dice until their sum is 8
int rollDiceUntilEight() {
    int nRoll = 0;
    int dice1 = 0, dice2 = 0;

    while (true) { // Infinite loop, break when sum is 8
        nRoll++;
        dice1 = rand() % 6 + 1; // Roll first die
        dice2 = rand() % 6 + 1; // Roll second die

        if (dice1 + dice2 == 8) { // Check if sum is 8
            break;
        }
    }
    return nRoll;
}

// Simulates rolling two dice until both show 4 (Hard Eight)
int rollDiceUntilHardEight() {
    int nRoll = 0;
    int dice1 = 0, dice2 = 0;

    while (true) { // Infinite loop, break when both dice show 4
        nRoll++;
        dice1 = rand() % 6 + 1; // Roll first die
        dice2 = rand() % 6 + 1; // Roll second die

        if (dice1 == 4 && dice2 == 4) { // Check for Hard Eight
            break;
        }
    }
    return nRoll;
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed random number generator

    int trials = 10000; // Number of trials
    int totalNumRolls = 0; // Total rolls for "Eight"
    int totalNumRollsHard = 0; // Total rolls for "Hard Eight"

    // Run simulations
    for (int i = 0; i < trials; i++) {
        totalNumRolls += rollDiceUntilEight();
        totalNumRollsHard += rollDiceUntilHardEight();
    }

    // Calculate averages
    double averageNumRolls = static_cast<double>(totalNumRolls) / trials;
    double averageNumRollsHard = static_cast<double>(totalNumRollsHard) / trials;

    // Print results
    cout << fixed << setprecision(2);
    cout << "The average number of rolls needed to get an Eight is: " << averageNumRolls << endl;
    cout << "The average number of rolls needed to get a Hard Eight is: " << averageNumRollsHard << endl;

    return 0;
}
