# HW7

## Due March 12th 2025, 11:59pm

**Instructions:** 
Code writing should be implemented in corresponding `.cpp` files and results reporting/short answers can be either added in README file or uploading `.jpg/.png/.pdf` files in the repository.

---------------------------------------------------------------------------------------------------------------------------------------
## Problem 1. [45 points]
Implement the following advanced vector functions in `vector_advanced_functions.h`:

(a). Find the duplicates in a vector. For example, $x = [2, 3, 5, 2, 0, 1, 8, 9]$, it should find $2$. Name this function `duplicates`.

(b). Output the reverse of a vector. For example, $x = [1,2,3,4,5,6,7]$, it should output reversed_x = $[7,6,5,4,3,2,1]$. Name this function `reverse`.

(c). Find the prime numbers in a vector. For example, $x = [10, 7, 13, 20, 29, 33, 37, 40, 41]$, it  should find $[7, 13, 29, 37, 41]$. Name this function `primes`.

Use namespaces to include `vector_advanced_functions.h` in `vector_advanced_function.cpp`. In `vector_advanced_function.cpp`, we test a vector $x = [2,37,9,2,7,9,3,10]$ for `duplicate(x)`, `reverse(x)` and `primes(x)`. Report the outputs.

*[Hint: take a look at `vector_function_namespace.cpp` and `vector_functions_namespace.h` in Lecture 18]*

```
Duplicates: 2 9 
Original Vector: 2 37 9 2 7 9 3 10 
Reversed Vector: 10 3 9 7 2 9 37 2 
Prime Numbers: 2 37 2 7 3 
```


## Problem 2. [20 points]
`coordinates.txt` provides a list of row index and column index of a mystery pattern. Can you write a C++ code that prints `"*"` for the row index and column index listed in `coordinates.txt` and prints `" "` for space in others? There are 153 rows and 300 columns in total. Print the mystery pattern in `myPattern.txt` and report what it is here. 


*[Hint: We did pattern plotting in HW5. Take a look at `TicTacToe.cpp` in Lecture 19. Step1: read `coordinates.txt` and record the information in a 2D array; Step2: open `myPattern.txt, plot the pattern following the 2D array.]*

```
longhorn
```


## Problem 3. [35 points]
**Pokemon Battle!** Write a function with the following signature to simulate one round of a Pokemon attack:

`void attack(double &attackerHealth, double &defenderHealth, int move);`

Here `attackerhealth` is the current health state for the attacker, and `defenderHealth` is the current health state for the defender. Both input variables have a possible value range from 0.0 to 100.0. The user and the computer will take turns to choose one of the following three moves based on the following value of move:

1: an attack with damage between 15.0 and 30.0 with equal probability to the defender;

2: an attack with damage between 0.0 and 50.0 with equal probability to the defender;

3: Heal an amount between 5.0 and 20.0 with equal probability to the attacker.

Using this function, write a main program that simulates a Pokemon battle between the user and the computer (this function can be used for both user turn and the computer turn). Initially, both the user and the computer have a health point of 100. The user should take the first move, and the function should take the user’s choice of move using cin. If the user entered an invalid option, please
ask the user to enter a new choice again until a valid option is entered. The computer should choose the heal option when its health is below 25, otherwise the computer will choose one of the three options with equal probability. After each attack, a message should be printed out that tells the user what just happened, and how much health the user and computer have. If a heal leads to a health state over 100.0, the health state will be set to 100.0. If an attack leads to a health state below 0.0, the health state will be set to 0.0, and the battle ends. Submit your .cpp file as “PokemanBattle.cpp”.

*[Hint: Review `TicTacToe.cpp` in Lecture 19 and `SpaceExplorationGame.cpp` in Lecture 15.]*
