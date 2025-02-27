#include <iostream>
#include <cmath>
using namespace std;

//define factorial function as described in (a)
int factorial(int n)
{
    int ret = 1;
    for (int x = 2; x <= n; x++)
    {
        ret *= x;
    }
    return ret;
}
//define comination function as described in (a)
int combination(int n, int k)
{
    int numerator = factorial(n);
    int Kfact = factorial(k);
    int k_n_fact = factorial(n - k);
    int c = numerator/Kfact/k_n_fact;
    return c;
}

//define Pascal function as described in (b)
int Pascal(int n, int k)
{
    if(k==0){
        return 1;
    }else if(k==n){
        return 1;
    }else{
        return Pascal(n-1,k-1) + Pascal(n-1,k);
    }
}

int main() {
    int n;
    cout << "Please enter a positive integer: " << endl;
    cin >> n;
    while( n < 0)
    {
    cout << "The value you entered is not a positive integer. Please try again." << endl;
    cout << "Please enter a positive integer: " << endl;
    cin >> n;
    }
    //report using approach (a)
    cout << "Using approach (a):"<< endl;
    for (int k = 1; k <= n; k++)
    {
    int result = combination(n, k);
    cout << "c(" << n << ", " << k << ") = " << result << endl;
    }
    
    //report using approach (b)
    cout << "Using approach (b):"<< endl;
    for (int k = 1; k <= n; k++)
    {
    int result = Pascal(n, k);
    cout << "c(" << n << ", " << k << ") = " << result << endl;
    }
    
    return 0;
}
