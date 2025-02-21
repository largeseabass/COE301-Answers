#include <iostream>
#include <fstream>
using namespace std;
//pattern for several rings of different sizes using function
void printPattern(double r,double R, int rows, int cols, ofstream& myfile){
    for (int i = 0; i < rows; i++) {        // Loop through rows
        for (int j = 0; j < cols; j++) {    // Loop through columns
            // Calculate x and y based on current grid location
            double x = (j - cols / 2.0) / 25.0; // Scale horizontally [-2, 2]
            double y = (rows / 2.0 - i) / 25.0; // Scale vertically [-2,2]
            if ((x*x +y*y < R*R)&&(x*x +y*y > r*r)) // inside the circle of radius:x*x +y*y = R*R and outside the circle of radius:x*x +y*y = r*r
            {
                myfile << "x "; // Print 'x'
            }
            else{
                myfile << "  ";// Print space
            }
        }
        myfile << endl; // Move to the next row
    }
}
int main() {
    const int rows = 101; // Number of rows
    const int cols = 101; // Number of columns

    ofstream myfile;
    myfile.open("Bubble.txt");

    printPattern(1.2,1.5,rows,cols,myfile);
    printPattern(0.8,1.0,rows,cols,myfile);
    printPattern(0.3,0.5,rows,cols,myfile);

    myfile.close();
    cout << "Bubble Pattern written to Bubble.txt" << endl;

    return 0;
}
