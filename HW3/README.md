[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/NTJaSyea)
# HW3
## Due Feb 5th 2025, 11:59pm

**Instructions:** 
Code writing should be implemented in corresponding `.cpp` files and results reporting/short answers can be either added in README file or uploading `.jpg/.png/.pdf` files in the repository.

---------------------------------------------------------------------------------------------------------------------------------------

## Problem 1. [30 points]

**The Rule of 7**: In a distant world, there is a unique game where numbers are classified based on the following rules:
1.	A number is considered “Lucky” if it is divisible by 7.
2.	However, if the number is also divisible by 13, it is considered “Extra Lucky”.
3.	If a number is not divisible by 7, it is considered “Not Lucky”.

Write a C++ program in `Rule7.cpp` that:
1.	Asks the user to input an integer number.
2.	Checks if the number is “Lucky”, “Extra Lucky”, or “Not Lucky” based on the rules above.
3.	Displays the classification of the number on the screen.

Test your program with the following numbers and report your results: 7, 13, 91, 14, 26, and 100.

```
Enter an integer number: 7
7 is Lucky.

Enter an integer number: 13
13 is Not Lucky.

Enter an integer number: 91
91 is Extra Lucky.

Enter an integer number: 14
14 is Lucky.

Enter an integer number: 26
26 is Not Lucky.

Enter an integer number: 100
100 is Not Lucky.
```



## Problem 2. [30 points]

**Updated Banker's rounding algorithm**: In class we have implemented Banker's rounding algorithm in `BankerRounding.cpp`. Now we have the following updated rule:

(1) ask the user to enter a positive number;

(2) if the fraction is less than 0.5 but greater than 0, round down;

(3) if the fraction is greater than 0.5, round up;

(4) if the fraction is 0.5, round to the nearest even number;

(5) if the fraction is 0.0, print "No Rounding!".

(6) display the rounded number on the screen.

Please edit `BankerRonding.cpp` to implement the updated rule.

Test your program with the following numbers and report your results: 2.4, 6.9, 5.5, 8.5 and 10.0

```
Please enter a positive number with one decimal point.
2.4
The rounded number is 2

Please enter a positive number with one decimal point.
6.9
The rounded number is 7

Please enter a positive number with one decimal point.
5.5
The rounded number is 6

Please enter a positive number with one decimal point.
8.5
The rounded number is 8

Please enter a positive number with one decimal point.
10.0
No Rounding!
The rounded number is 10
```

## Problem 3. [40 points]
Rewrite Problem 2 using `switch` in `BankerRoundingSwitch.cpp`. 

Test your program with the following numbers and report your results: 2.4, 6.9, 5.5, 8.5 and 10.0

*[Hint:*

    switch (static_case<int>(numDec > 0.5))
         {
           case 0: // (numDec > 0.5) is false
           ...

           case 1: // (numDec > 0.5) is true
           ...
           
           }

*You may need nested switch like this.]*

```
The same output should be expected.
```
