/* Problem 4
 Write a C++ program that
 (a). Asks a user to enter two numbers r and h, that represent the radius and height of the water tank respectively.
 (b). Computes the volume of the water tank as V = PI*r*r*h.
 (c). Displays the result on your screen with two fraction digits using printf (for example, 37.7778 should be displayed as 37.78).
 (d). Test your code by using r = 2.5, h = 2.4 and report the result.
 */
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    // Define the variables needed for the water tank
    double r, h, V;
    // Ask the user to enter the radius and height of the water tank
    cout << "Enter the radius of the water tank r: ";
    cin >> r;
    cout << "Enter the height of the water tank h: ";
    cin >> h;
    // Compute the volume of the water tank
    V = M_PI * pow(r, 2) * h;
    // Display the result on the screen with two fraction digits
    printf("The volume of the water tank is %.2f\n", V);
    // Test the code by using r = 2.5, h = 2.4
    r = 2.5;
    h = 2.4;
    V = M_PI * pow(r, 2) * h;
    printf("The volume of the water tank with r = 2.5 and h = 2.4 is %.2f\n", V);
    return 0;
}