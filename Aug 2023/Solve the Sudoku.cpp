bool valid(int grid[N][N], int row, int col, int filler)    {
        for (int i=0; i<N; i++) {
            if (grid[row][i]==filler)   return false;
            if (grid[i][col]==filler)   return false;
            if (grid[(row/3)*3+i/3][(col/3)*3+i%3]==filler) return false;
        }
        return true;
    }
    bool validSudoku(int grid[N][N])    {
        // below code snippet checks for any repeating number in either row or column
        for (int i=0; i<N; i++) {
            set<int> row, col;
            for (int j=0; j<N; j++) {
                if (grid[i][j]!=0)  {
                    if (!row.empty() && row.count(grid[i][j]))  return false;
                    row.insert(grid[i][j]);
                }
                if (grid[j][i]!=0)  {
                    if (!col.empty() && col.count(grid[j][i]))  return false;
                    col.insert(grid[j][i]);
                }
            }
        }
        // below code snippet checks for any repeating number in any of the 3x3 sub-grids
        for (int i=0; i<9; i++) {
            set<int> st;
            for (int j=0; j<9; j++) {
                if (grid[j/3+(i/3)*3][j%3+(i%3)*3]!=0)  {
                    if (!st.empty() && st.count(grid[j/3+(i/3)*3][j%3+(i%3)*3]))    return false;
                    st.insert(grid[j/3+(i/3)*3][j%3+(i%3)*3]);
                }
            }
        }
        return true;
    }
    public:
    // function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N], int x=1)  
    { 
        // taking a default argument x=1 because the first time function
        // call occurs from driver code, we need to check if given grid
        // is a valid sudoku in itself or not
        if (x && !validSudoku(grid)) return false;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (grid[i][j]==0)  {
                    for (int filler=1; filler<=N; filler++) {
                        if (valid(grid, i, j, filler))  {
                            grid[i][j] = filler;
                            if (SolveSudoku(grid, 0))   return true;
        // passing x=0 as we need not to check again for a valid sudoku grid
                            else    grid[i][j] = 0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    // function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cout << grid[i][j] << " ";
            }
        }
    }