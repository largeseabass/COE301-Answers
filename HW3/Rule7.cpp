#include <iostream>
using namespace std;

int main() {
    int number;
    // Ask the user to input an integer number
    cout << "Enter an integer number: ";
    cin >> number;

    // Check the classification of the number
    if (number % 7 == 0) { // Check if divisible by 7
        if (number % 13 == 0) { // Check if also divisible by 13
            cout << number << " is Extra Lucky." << endl;
        } else {
            cout << number << " is Lucky." << endl;
        }
    } else {
        cout << number << " is Not Lucky." << endl;
    }

    return 0;
}



