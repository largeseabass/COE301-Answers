# HW6


## Due Feb 26th 2025, 11:59pm

**Instructions:** 
Code writing should be implemented in corresponding `.cpp` files and results reporting/short answers can be either added in README file or uploading `.jpg/.png/.pdf` files in the repository.

---------------------------------------------------------------------------------------------------------------------------------------

## Problem 1. [60 points]

The mathematical combination function $c(n, k)$ is usually defined in terms of factorials, as follows:

$$c(n,k) = \frac{n!}{k!(n-k)!}$$

(a). One approach to compute this: Write a factorial function that takes a positive integer $n$ and returns $n!$, that is the product of all positive integers less than or equal to $n$; Then Write another function that computes $c(n, k)$ by calling the factorial function.


(b). Another approach to compute this: The values of $c(n, k)$ can also be arranged geometrically to form a triangle in which $n$ increases as you move down the triangle and $k$ increases as you move from left to right. The resulting structure, which is called Pascal’s Triangle, is arranged like this:

$$c(0,0)$$
$$c(1,0) \quad c(1,1)$$
$$c(2,0) \quad c(2,1) \quad c(2,2)$$
$$c(3,0) \quad c(3,1) \quad c(3,2) \quad c(3,3)$$
$$c(4,0) \quad c(4,1) \quad c(4,2) \quad c(4,3) \quad c(4,4)$$

Pascal’s Triangle has the interesting property that every entry is the sum of the two entries above it, except along the left and right edges, where the values are always 1. For example, $c(3,2)$ can be written as $c(2,1)+c(2, 2)$. Using this fact, write a recursive implementation of the $c(n, k)$ function that uses no loops, no multiplication, and no calls to a function that computes factorial of $n$. The function should take two input arguments $n$ and $k$ and return $c(n,k)$.


(c). Implement in the main program `combination.cpp` that asks the user to enter a positive integer. Assuming the user always enters a valid integer number, the program should verify that $n$ is greater than 0 and if not, ask for another, checks again, until a correct input was entered. The program then calls the combination function/Pascal function and displays the value $c(n,k)$ for $k = 1, 2,…,n$ on the screen.

Report your results using both approaches in (a) and (b) for $n=8$.

## Problem 2. [40 points]
As we were discussing in lecture, define a class name `UTID`. It should has a data members including a name, an EID and an ID number. The member functions should include `GetName`, `SetNam`e, `GetEID`, `SetEID`, `GetNumber` and `SetNumber`. We also want to include a member function `LoveUT` which prints out "I love UT!". Initialize an object `MyStudentID` in the class `UTID` with name "Hook'Em", EID "he12345" and ID number "1234567891234567". Use `GetName`, `GetEID` and `GetNumber` to print the initialized object. Print "I love UT" using the member function `LoveUT` in between. Then use `SetName`, `SetEID` and `SetNumber` to update the object with your own information. Print to the screen as well. Upload your cpp file as `UT_ID.cpp`.
