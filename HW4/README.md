# HW4
## Due Feb 5th 2025, 11:59pm

**Instructions:** 
Code writing should be implemented in corresponding `.cpp` files and results reporting/short answers can be either added in README file or uploading `.jpg/.png/.pdf` files in the repository.

---------------------------------------------------------------------------------------------------------------------------------------

## Problem 1. [40 points]
**Game of Gambling**: A gambler starts with $100. At each bet, the gambler either wins or loses $1 with the following probabilities:
1.	Wins $1 with a probability of 4/7.
2.	Loses $1 with a probability of 3/7.

Write a C++ program in `RandomGambling.cpp` that simulates the gambler’s journey, starting with $100, until they either:
1.	Reach $200 (double their money), or
2.	Lose all their money (reach $0).

The program should:
1.	Count and display how many bets the gambler made before the journey ended.
2.	Display whether **"The gambler doubled their money after # bets”** or **“The gambler went bankrupt after # bets”**. Replace # with the actual count of bets made.

**Requirements:**
* use random number generation to simulate each bet's outcome
* use a `while` loop to track the gambler's money and number of bets.

Report the output from five separate runs.

*[Hint: this is a similar problem as `RandomWalk.cpp` in Lecture 9.]*


## Problem 2. [60 points]
**Estimating PI** in three way:

(a). In `MC_PI_while.cpp`,implement a C++ progam to estimate PI using the Monte Carlo method in a `while` loop;

(b). In `MC_PI_for.cpp`,implement a C++ progam to estimate PI using the Monte Carlo method in a `for` loop;

(c). In `NI_PI.cpp`,implement a C++ progam to estimate PI using the Numerical Integration method in a `for` loop;

All of your programs should ask the user to input the total number of random points (xi,yi) used in Monte Carlo simulation or input the total number of rectangles used in Numerical Integration. Display the estimation difference between your estimated PI value and PI_true = 3.14159265.

Report the programs outputs using $10^2, 10^3, 10^4, 10^5, 10^6$ and $10^7$ sample points/rectangles. 


