#include <iostream>
#include <vector>//using std::vector
#include "vector_advanced_functions.h"
using namespace std;
using namespace utility;

int main()
{
   //may need to compile with g++ -std=c++11 -o vector_function vector_function.cpp to make this next line work
   vector<int> x = {2,37,9,2,7,9,3,10};
   duplicates(x);

   // Get the reversed vector
    vector<int> reversed_x = reverse(x);

    // Display original vector
    cout << "Original Vector: ";
    for (int i : x) {
        cout << i << " ";
    }
    cout << endl;

    // Display reversed vector
    cout << "Reversed Vector: ";
    for (int i : reversed_x) {
        cout << i << " ";
    }
    cout << endl;

    // Find and return prime numbers
    vector<int> prime_nums = primes(x);

    // Display prime numbers
    cout << "Prime Numbers: ";
    for (int num : prime_nums) {
        cout << num << " ";
    }
    cout << endl;

   return 0;
}

