#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    const int N = 5000;// number of rolls
    int dice1 = 0;
    int dice2 = 0;
    ofstream myfile;
    myfile.open("5000Rolls.txt");
    
    for(int i = 1; i<=N; i++)
    {
        dice1 = rand()%6 + 1;
        dice2 = rand()%6 + 1;
        myfile << dice1 << " " << dice2 << endl;
    }
    
    myfile.close();
    cout << "5000 rolls finished. Results are recorded in 5000Rolls.txt"<<endl;
    return 0;
}
