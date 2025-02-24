# HW5

## Due Feb 19th 2025, 11:59pm

**Instructions:** 
Code writing should be implemented in corresponding `.cpp` files and results reporting/short answers can be either added in README file or uploading `.jpg/.png/.pdf` files in the repository.

---------------------------------------------------------------------------------------------------------------------------------------

## Problem 1. [40 points]

(a). Generate a 2D pattern with 101 rows and 101 columns using a nested loop as follows: At the location $(i,j)$, that is the $i$-th row and $j$-th column, scale the coordinate so that it is centered in $(0,0)$ and within $[-2,2]\times[-2,2]$. Print out a ring by 'x', i.e., if this location is inside the cicle of radius 1.5 and outside the circle of radius 1.3. Otherwise, print out ' ' for space. Implement this in `RingPattern.cpp` and save the pattern to a text file "Ring.txt".

(b). Follow the same spirit, implement in `BubblePattern.cpp` which print out three rings of different sizes. The first ring is inside the cicle of radius 1.5 and outside the circle of radius 1.2; The second ring is inside the cicle of radius 1.0 and outside the circle of radius 0.8; The third ring is inside the cicle of radius 0.5 and outside the circle of radius 0.3. **Use the function `printPattern`**. Save the pattern to a text file "Bubble.txt".

*[Hint: this is similar to `PatternPlotting.cpp` in Lecture13]*

## Problem 2. [60 points]

If you watched Friends, you will remember there is one episode in Season 5 **The One in Vegas**. Chandler and Monica were playing a game together at the craps table. (Totally okay if you don't know what I'm talking about. It is just a game of rolling two dices.)

(a). Implement in `Roll2Dices.cpp` so that it simulates the results of rolling 2 dices together for 5000 times. Write the results in "5000Rolls.txt".

*[Hint: you want to generate random integers of 1, 2, 3, 4, 5, 6 with equal probability. Recall `x = rand()` generates an integer between `0` and `RAND_MAX` with equal probability. What does `y = rand()%6` generate?]*


(b). Implement in `GetEight.cpp` so that it reads the data in "5000Rolls.txt" and count the number of times we get an Eight (sum of the two dices quals 8) and the number of times we get a hard Eight (two 4s). Each time we get an Eight, print out the number in the two dices and print "We buy everyone here a steak dinner!"; Each time we get a hard Eight, print out "It's a hard Eight! Chandler and Monica get married here tonight!".

*[Hint: Recall `WordsCounting.cpp` in Lecture9 on how to read numbers from .txt]*

```
...
We buy everyone here a steak dinner!
We got 6 and 2, an Eight!
We buy everyone here a steak dinner!
We got 4 and 4, an Eight!
We buy everyone here a steak dinner!
It's a hard Eight!
Chandler and Monica get married here tonight!
We got 6 and 2, an Eight!
We buy everyone here a steak dinner!
We got 4 and 4, an Eight!
We buy everyone here a steak dinner!
...
In 5000Rolls.txt, we have 696 times of getting an Eight, and we have 143 times of getting a hard Eight.
```
(c). Implement in `RollDiceUntilEight.cpp`. Write a function   `rollDiceUntilEight` to count the number of rolls you need to get a first Eight. Similarly, Write a function   `rollDiceUntilHardEight` to count the number of rolls you need to get a first Hard Eight. Do 10,000 trials and report the average number of rolls needed to get an Eight and the average number of rolls needed to get a Hard Eight.

```
The average number of rolls needed to get an Eight is: 7.20
The average number of rolls needed to get a Hard Eight is: 35.97
```

*[Hint: there are* $6 \times 6 = 36$ *outcomes in total. Among them, [dice1 = 2, dice2 = 6], [dice1 = 3,dice2 = 5], [dice1 = 4, dice2 = 4],[dice1 = 5, dice2 = 3],[dice1 = 6, dice2 = 2] can give us an Eight. So the probability of rolling an "Eight" is 5/36. So the average number of rolls needed to get an Eight is* $36/5\approx 7.2$. *Similarly,  the probability of rolling a hard "Eight" is 1/36. So the average number of rolls needed to get an Eight is 36. You should get the results close to these.]*

