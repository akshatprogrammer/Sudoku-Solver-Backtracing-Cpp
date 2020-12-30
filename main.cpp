/*
Program : Sudoku Solver
Description : It is a sudoku solver program. It solves the sudoku entered by the user of 9X9 matrix.
Author : Akshat Jain
Roll Number : 1918006
Email : akshat.kodia@gmail.com
github : github.com/akshatprogrammer
*/

#include<iostream>
#include<conio.h>
#include"game.h"
#include"usedin.h"
using namespace std;

void inputGrid(int grid[9][9])
{
	for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cin >> grid[i][j];
			}
		}
}
void printGrid(int grid[9][9])
{
	cout << "Solved Sudoku is ->\n";
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}

int main()
{
	cout << "\t\t\t\tWelcome to Sudoku Solver by Akshat Jain\nPress any key to continue\nPress 0 to exit\n";
	int ch;
	cin >> ch;
	system("cls");
	if(ch==0)
		cout << "\n\n\n\n\n\n\t\t\t\tThank You!!";
	else{
    	int grid[9][9];
    	cout << "Enter the Sudoku to be solve -> " << endl;
    	inputGrid(grid);
		system("cls");
    	if (Sudoku(grid) == true)
        {
        	printGrid(grid);
			cout << "\n\n\nEnter any key to exit ";
			cin >> ch;
			system("cls");
			cout << "Thank You";
			exit(0);	
		}
    	else
        	cout << "No solution exists";
    	}
    return 0;
}
