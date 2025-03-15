#pragma once
#include <vector>//using std::vector
using namespace std;

namespace utility{
// Function to find duplicates
void duplicates(vector<int> &nums) {
    cout << "Duplicates: ";
    bool found = false;

    for (size_t i = 0; i < nums.size(); i++) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                cout << nums[i] << " ";
                found = true;
                break;  // To avoid printing the same duplicate multiple times
            }
        }
    }

    if (!found){
        cout << "None";
    }
    cout << endl;
}


// Function to return a reversed vector
vector<int> reverse(const vector<int>& nums) {
    vector<int> reversed_nums;
    // Copy elements in reverse order
    for (int i = nums.size() - 1; i >= 0; i--) {
        reversed_nums.push_back(nums[i]);
    }
    return reversed_nums; // Return the new reversed vector
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;  // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find prime numbers in a vector
vector<int> primes(const vector<int>& nums) {
    vector<int> prime_nums;
    for (int num : nums) {
        if (isPrime(num)) {
            prime_nums.push_back(num);
        }
    }
    return prime_nums;  // Return the vector containing only prime numbers
}

}


