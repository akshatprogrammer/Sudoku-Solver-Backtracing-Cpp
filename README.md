# Sudoku-Solver-Backtracing-Cpp
## Description
* It is a sudoku solver program.
* It solves the sudoku entered by the user of 9X9 matrix.
## Requirements 
* Visual Studio 2019 / Dev-Cpp
* Atleast 4 GB RAM
* i3 or higher
* 40 GB space
* Windows, Mac, Linux
* Desire to learn new.
## My PC Specs
1. i5-8th gen
2. Windows 10
3. 8 GB RAM
4. 430 GB unused space.

## What is Backtracking?
Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree).


## Backtracking Approach
Sudoku can be solved by one by one assigning numbers to empty cells. Before assigning a number, check whether it is safe to assign. Check that the same number is not present in the current row, current column and current 3X3 subgrid. After checking for safety, assign the number, and recursively check whether this assignment leads to a solution or not. If the assignment doesn’t lead to a solution, then try the next number for the current empty cell. And if none of the number (1 to 9) leads to a solution, return false and print no solution exists.


## Algorithm
1. Create a function that checks after assigning the current index the grid becomes unsafe or not. Keep Hashmap for a row, column and boxes. If any number has a frequency greater than 1 in the hashMap return false else return true; hashMap can be avoided by using loops.

2. Create a recursive function that takes a grid.

3. Check for any unassigned location. If present then assign a number from 1 to 9, check if assigning the number to current index makes the grid unsafe or not, if safe then recursively call the function for all safe cases from 0 to 9. if any recursive call returns true, end the loop and return true. If no recursive call returns true then return false.

4. If there is no unassigned location then return true.

## How to run this program?
1. There are 2 header files in this program.
2. Keep all header files and main.cpp file in same folder.
3. Include all the header files in the program.
#### How to include user defined header files?
 **#include"name.h"**
 
## Use of Every Fucntion used in the program
1. emptyFind() -> This function finds an entry in grid that is still unassigned.
2. isOkToAssignNumber() -> Checks whether it will be legal to assign num to the given row, col.
3. Sudoku() -> Takes a partially filled-in grid and attempts 
to assign values to all unassigned locations in 
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes).
4. UsedInBox() -> Returns a boolean which indicates whether 
an assigned entry within the specified 3x3 box 
matches the given number.

5. UsedInCol() -> Returns a boolean which indicates whether 
an assigned entry in the specified column
matches the given number.

5. UsedInRow() -> Returns a boolean which indicates whether 
an assigned entry in the specified row matches
the given number.
