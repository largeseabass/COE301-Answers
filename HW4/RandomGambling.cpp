#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int money = 100;  // Starting amount
    int target = 200; // Target to double the money
    int bankrupt = 0; // Losing all money
    int bets = 0;     // Counter for bets

    srand(time(NULL)); // Seed for random number generator

    while (money > bankrupt && money < target) {
        // Simulate probabilities
        double rn;
        rn = double(rand()) / double(RAND_MAX); // Random number [0, 1]
        
        if (rn < 4.0 / 7.0) {
            money += 1; // Win \$1
        } else {
            money -= 1; // Lose \$1
        }

        bets++; // Increment the number of bets
    }

    // Display results
    if (money >= target) {
        cout << "The gambler doubled their money after " << bets << " bets." << endl;
    } else {
        cout << "The gambler went bankrupt after " << bets << " bets." << endl;
    }

    return 0;
}
