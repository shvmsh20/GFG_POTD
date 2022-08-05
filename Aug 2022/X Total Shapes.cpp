int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    void dfs(int i, int j, int n, int m, vector<vector<char>>& grid){
        grid[i][j] = 'O';
        for(int k=0; k<4; k++){
            int nx = i+dx[k];
            int ny = j+dy[k];
            if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='X'){
                dfs(nx, ny, n, m, grid);
            }
        }
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='X'){
                    count++;
                    dfs(i, j, n, m, grid);
                }
            }
        }
        return count;
    }