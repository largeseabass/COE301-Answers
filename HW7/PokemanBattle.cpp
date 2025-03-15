#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void attack(double &attackerHealth, double &defenderHealth, int move)
{
    switch (move){
        case 1:
            defenderHealth = defenderHealth - 15.0 - double(rand()) / double(RAND_MAX) * 15.0;
            break;
        case 2:
            defenderHealth = defenderHealth - double(rand()) / double(RAND_MAX) * 50.0;
            break;
        case 3:
            attackerHealth = attackerHealth + 5.0 + double(rand()) / double(RAND_MAX) * 15.0;
            break;
        default:
            cerr << "Error" << endl;
            exit(EXIT_FAILURE);
    }
    if (attackerHealth > 100.0)
    {
        attackerHealth = 100.0;
    }else if (defenderHealth < 0.0)
    {
        defenderHealth = 0.0;
    }
}

int main ()
{
    double userHealth =100.0;
    double compHealth =100.0;
    bool userTurn = true;
    int move;
    srand(time(NULL));
    while (true){
        cout << setfill('-') << setw(50) << "-" << endl << setfill(' ');
        if(userTurn){
            do{
                cout << "Enter an attack move: ";
                cin >> move;
            }while(move != 1 && move != 2 && move != 3);
            cout << "User takes move " << move << endl;
            attack(userHealth, compHealth, move);
        }else{
            double compProb = double(rand()) / double(RAND_MAX);
            if (compProb < 1.0/3.0){
                move = 1;
            }else if (compProb < double(2.0/3.0)){
                move = 2;
            }else{
                move = 3;
            }
            if (compHealth < 25.0){
                move = 3;
            }
            cout << "Computer takes move " << move << endl;
            attack(compHealth, userHealth, move);
        }
        cout << setw(20) << "User Health: " << userHealth << endl;
        cout << setw(20) << "Computer Health: " << compHealth << endl;
        userTurn = !userTurn;
        if (userHealth <= 0.0 || compHealth <= 0.0)
        {
            break;
        }
    }
    cout << setfill('-') << setw(50) << "-" << endl << setfill(' ');
    cout << "The battle ends!" << endl;
    return 0;
}
