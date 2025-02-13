#include <iostream>
using namespace std;

int main() {
    double num,numDec;
    int numInt, result;
    cout << "Please enter a positive number with one decimal point." << endl;
    cin >> num;
    numInt = int(num);
    numDec = num-numInt;
    
    if ((numDec < 0.5)&& (numDec > 0))
    {
        result = numInt;
    }
    else if (numDec > 0.5)
    {
        result = numInt + 1;
    }
    else if (numDec == 0.5)
    {
        if ((numInt % 2) == 0)
        {
            result = numInt;
        }
        else
        {
            result = numInt +1;
        }
    }
    else
    {
        result = numInt;
        cout << "No Rounding!" << endl;
    }
    cout << "The rounded number is " << result << endl;
    return 0;
}



