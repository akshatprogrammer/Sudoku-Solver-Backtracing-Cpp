bool UsedInRow(int grid[9][9], int row, int num);

bool UsedInCol(int grid[9][9], int col, int num);

bool UsedInBox(int grid[9][9], int boxStartRow,int boxStartCol, int num);

bool emptyFind(int grid[9][9], int& row, int& col)
{
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (grid[row][col] == 0)
                return true;
    return false;
}

bool isOkToAssignNumber(int grid[9][9], int row,int col, int num)
{
	bool val = !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) && !UsedInBox(grid, row - row % 3,col - col % 3, num)
           && grid[row][col] == 0;
    
	return val;
}
 

bool Sudoku(int grid[9][9])
{
    int row, col;
    if (!emptyFind(grid, row, col))
        return true;
    for (int num = 1; num <= 9; num++) 
    {     
        if (isOkToAssignNumber(grid, row, col, num)) 
        {   
            
            grid[row][col] = num;
            if (Sudoku(grid))
                return true;
                
            grid[row][col] = 0;
        }
    }
    return false;
}
