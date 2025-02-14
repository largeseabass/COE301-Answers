#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "Please enter total number of rectangles to estimate PI:" <<endl;
    cin >> N;
    double xi, yi, Si,myPI;
    double dx = 1.0/N;
    double totalS = 0.0;

    for (int i = 1; i<=N; i++)
    {
        xi = (i-1)*dx;
        yi = pow(1-xi*xi,0.5);
        Si = dx*yi;
        totalS +=Si;
    }
    myPI = totalS*4;
    double PI_true = 3.14159265;
    cout<< "My NI estimation of PI is: " << myPI << endl;
    cout<< "The error is: " << myPI - PI_true << endl;
    return 0;
}
