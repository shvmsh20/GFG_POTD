void solve(int i, int j, int n, int m, vector<vector<int>> &grid, vector<int> &temp, 
    vector<vector<int>> &res){
        if(i==n-1 && j==m-1){
            temp.push_back(grid[i][j]);
            res.push_back(temp);
            temp.pop_back();
            return;
        }
        temp.push_back(grid[i][j]);
        if(i+1<n){
            solve(i+1, j, n, m, grid, temp, res);
        }
        if(j+1<m){
            solve(i, j+1, n, m, grid, temp, res);
        }
        temp.pop_back();
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<vector<int>>res;
        vector<int> temp;
        solve(0, 0, n, m, grid, temp, res);
        return res;
    }