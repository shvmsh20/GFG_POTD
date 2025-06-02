int solve(int x, int y, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp){
        if(x<0 || x>=n || y<0 || y>=m || grid[x][y]==1) return 0;
        if(x==n-1 && y==m-1) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        int right = solve(x, y+1, n, m, grid, dp);
        int down = solve(x+1, y, n, m, grid, dp);
        return dp[x][y] = right+down;
    }
    int uniquePaths(vector<vector<int>> &grid) {
        // code here
        int n = grid.size(), m = grid[0].size();
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return 0;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, n, m, grid, dp);
    }