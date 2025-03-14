#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int redPoints = 0;
    int counter = 0;
    int N;
    cout << "Please enter total number of random points to estimate PI:" <<endl;
    cin >> N;
    double x, y, myPI;
    srand(time(NULL));
    while (counter < N)
    {
        x = double(rand())/double(RAND_MAX);
        y = double(rand())/double(RAND_MAX);
        if (x * x + y * y < 1)
        {
            redPoints++;
        }
        counter++;
    }
    myPI = double(redPoints)/N*4;
    double PI_true = 3.14159265;
    cout<< "My MC estimation of PI is: " << myPI << endl;
    cout<< "The error is: " << myPI - PI_true << endl;
    return 0;
}
