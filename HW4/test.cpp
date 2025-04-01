#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(NULL));
    int money = 100;  // Starting amount
    int target = 200; // Target to double the money
    int bankrupt = 0; // Losing all money
    int bets = 0;     // Counter for bets
    double win = 4.0/7.0;
    double rn; 

    //implement the gambling process here 
    while (money > 0 && money < target){
        rn = double(rand())/double(RAND_MAX);
        if(rn <= win){
            money++;}
        else{
            money--;
        }
        bets++;
    }

    //results with if statements 
        if (money == 200){
            cout << "The gambler doubled their money after " << bets << " bets." << endl;
        }
        else{
            cout << "The gambler went bankrupt after " << bets << " bets." << endl;
        }

    return 0;
}
