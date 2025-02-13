#include <iostream>
using namespace std;

int main() {
    double num,numDec;
    int numInt, result;
    cout << "Please enter a positive number with one decimal point." << endl;
    cin >> num;
    numInt = int(num);
    numDec = num-numInt;
   
    switch (static_cast<int>(numDec > 0.5))
    {
        case 0: // numDec <= 0.5
            switch (static_cast<int>(numDec == 0.5))
            {
                case 0: //numDec < 0.5
                    result = numInt;
                    switch (static_cast<int>(numDec == 0.0))
                    {
                        case 0://0 < numDec < 0.5
                            break;
                        case 1://numDec = 0.0
                            cout<< "No rounding!"<<endl;
                            break;
                    }
                    break;
                case 1: //numDec = 0.5
                    switch (static_cast<int>(numInt%2 ==0))
                    {
                        case 0: //numInt%2 = 1
                            result = numInt +1;
                            break;
                        case 1: //numInt%2 = 0
                            result = numInt;
                            break;
                    }
                    break;
            }
            break;
        case 1: // numDec > 0.5
            result = numInt +1 ;
            break;
        default:
            result = numInt;
    }
    
    cout << "The rounded number is " << result << endl;
    return 0;
}



