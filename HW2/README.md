# HW2
## Due Jan 29th 2025, 11:59pm

**Instructions:** 
* *For problem 1, 2 and problem 4(d), you can*

  *(a).type in this README by editing and commiting changes*

  *or*

  *(b). write the answer in a paper and take a picture, save the picture as .png or .jpg or .pdf. Upload the picture by adding files.*

* *For problem 3 and 4, do the same thing as HW1 or read Step 1 and 2 in Github_Desktop_and_pull_request.pdf in Files/Handouts/ on Canvas for a convenient way of downloading starter code and uploading updated code. Executable files are not neccesary. We only grade .cpp files.*

* *Problem 5 is optional with Bonus points! Learning this will be helpful for collaborative coding and debugging. It is the best way to interact with us in homework coding questions as well.*

---------------------------------------------------------------------------------------------------------------------------------------
### Some helpful tips:

### You can learn how to write like a pro using GitHub markdown with this [helpful page](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax).


### Good Habit 1: truncate your binary number into groups of four, e.g. 0000 0001 0100 0100

### Good Habit 2: name your variables and fuctions explicitly, e.g. water_height or waterHeight instead of variable001

### Good Habit 3: leave comments throughout your script, so I can understand your code, so do other people who are going to work on your code later.


## Problem 1. [20 points]
We have two decimal numbers: -12 and 27

(a). Convert them into **8-bits** binary **signed** integers

* -12 in binary: 11110100
  As 12 = 8+4 = 1*2^3 + 1*2^2
  The binary for 12 is (0000 1100)_2
  Performing two's complement (1111 0011+1)_2 = (1111 0100)_2

* 27 in binary: 00011011
  As 27 = 16+8+2+1 = 1*2^4 + 1*2^3 + 1*2^1 + 1*2^0

(b). Perform the binary addition and multiplication

* binary addition (1111 0100)_2 + (0001 1011)_2 = (0000 1111)_2 (we discard the [1] in [1]0000 1111)

* binary multiplication 
  1) the sign should be negative
  2) perform 12 * 27 = (0000 1100)_2 * (0001 1011)_2 = (0000 0001 0100 0100)_2
  3) perform 2's complement on the result, we get (1111 1110 1011 1011+1)_2 = (1111 1110 1011 1100)_2


  if you decide to truncate the results into 8-bit, you will perform two's complement on (0100 0100)_2, and obtain (1011 1011+1)_2 = (1011 1100)_2


(c). Covert the result from (b) to two decimal numbers 

* binary addition 15

* binary multiplication -324 (-68 if you did it in 8-bit)

## Problem 2. [20 points]
(a). Which of the following variable names are acceptable in C++?

`my_EID`, `UT-Austin`,`TotalIncome`,`return`,`!ex`, `Hook'em`,`2nd_game`,`_day1`,`I love coding`

* Valid: 'my_EID','TotalIncome', '_day1'.
* Invalid: 'UT-Austin', 'return', '!ex', 'Hook'em', '2nd_game', 'I love coding'.


(b). How many unique numbers can a 64-bit double variable represent?

This is the IEEE 754 standard, and we obtain information from [this link](https://en.wikipedia.org/wiki/Double-precision_floating-point_format).
* sign: 1 bit
* exponent: 11 bits
* fraction: 53 bits (52 explicitly stored)

why only 52 are explicitly stored?

Since the structure of the double variable is always ±1.fraction×2^{exponent}, we don't need to store the leading 1.

We need to consider:
1) normalized numbers (exponents running from 1 to 2^11 -2, 52 bit for fraction, consider both positive and negative values)
2^{52} * (2^{11}-2) * 2
2) subnormal numbers (when the exponent is all zeros, which allows representation of numbers closer to zero, consider both positive and negative values)
2^{52} * 2
3) special cases (+∞, −∞, and NaN)

In total, 2^{52} * (2^{11}-2) * 2 + 2^{52} * 2 + 3.


 4) Bonus Tip for people who study the answers carefully. If you are using GPT to help you understand the course content better, use the prompt 'You are a professor of computer science with 20 years of experience. You will answer my questions.' before asking anything. This will make your GPT gives more helpful answers. You can learn more about GPT prompts [here](https://huggingface.co/datasets/fka/awesome-chatgpt-prompts).

(c). What are the maximum and minimum values that a 16-bit **signed** integer can represent?

We have 1 signed bit and 15 remaining bits to represent the integer.

Our maximum value: 0111 1111 1111 1111 which is 2^{15}-1 = 32,767

Our minimum value: 1000 0000 0000 0000 which is -2^{15} = -32,768

(d). What is the output of the following block of C++ code?

`int i = 2,j = 7;`

`cout << i << " " << j << endl;`

`i = j;`

`cout << i << " " << j << endl;`

"2 7"
"7 7"

If you are not sure, write a complete c++ script and test it out.

(e). What is the output of the following block of C++ code?

`string myString = "I love C++.";`

`cout << "myString" << endl;`

`cout << myString << endl;`

`myString = "I love Python too.";`

`cout << myString << endl;`

"I love C++."
"I love C++."
"I love Python too."


## Problem 3. [20 points]
Read `myBinaryName.cpp` and run it. It should output "My name is Hannah" and also my binary name. Now edit the code and replace "Hannah" with your own name. Print your name and your binary name.

### Check myBinaryName.cpp for answers

## Problme 4. [30 points]
Write a C++ program in `WaterTank.cpp` that

(a). Asks a user to enter two numbers `r` and `h`, that represent the radius and height of the water tank respectively.

(b). Computes the volume of the water tank as `V = PI*r*r*h`.

(c). Display the result on your screen with two fraction digits using printf (for example, 37.7778 should be displayed as 37.78).

(d). Test your code by using `r = 2.5, h = 2.4` and report the result.

*[Hint: check `myName2.cpp`, `myPrinting.cpp` and `type_and_operations2.cpp` in Lecture 4.]*

### Check WaterTank.cpp for answers

## Problem 5. [Optional] [Bonus 10 points]
Read through Github_Desktop_and_pull_request.pdf in Files/Handouts/ on Canvas. Please do this after you finish Problem 1-4, commit and push changes in main branch.

Follow the instructions on Step 3 of Github_Desktop_and_pull_request.pdf to pull a request for `myPullRequest.cpp`.

