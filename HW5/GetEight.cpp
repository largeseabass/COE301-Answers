#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int dice1, dice2;
    int n = 0;
    int GetEight = 0;
    int GetHardEight = 0;
    
    ifstream myfile;
    myfile.open("5000Rolls.txt");
    
    if(!myfile.is_open())
    {
        cout << "Error opening file"<<endl;
        exit(-1);
    }
    while(myfile >> dice1 >> dice2)
    {
        n++;
        if (dice1 + dice2 == 8)
        {
            GetEight = GetEight+1;
            cout << "We got "<<dice1<<" and "<<dice2<<", an Eight!"<<endl;
            cout << "We buy everyone here a steak dinner!"<<endl;
        }
        if ((dice1 ==4)&(dice2 == 4))
        {
            GetHardEight = GetHardEight +1;
            cout << "It's a hard Eight!"<< endl;
            cout << "Chandler and Monica get married here tonight!"<<endl;
        }
    }
    myfile.close();
    
    cout << "In 5000Rolls.txt, we have "<< GetEight<<" times of getting an Eight,";
    cout << " and we have "<< GetHardEight<<" times of getting a hard Eight."<<endl;
    return 0;
}
