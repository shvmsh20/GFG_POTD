int dx[4] = {0, 0, +1, -1};
    int dy[4] = {+1, -1, 0, 0};
    void dfs(int x, int y, vector<vector<char>>& grid, int m, int n) {
        grid[x][y] = '$';
        for(int i=0; i<4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='O') {
                dfs(nx, ny, grid, m, n);
            }
        }
    }
    void fill(vector<vector<char>>& grid) {
        // Code here
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0; i<m; ++i) {
            if(grid[i][0]=='O') {
                dfs(i, 0, grid, m, n);
            }
            if(grid[i][n-1]=='O') {
                dfs(i, n-1, grid, m, n);
            }
        }
        for(int j=0; j<n; ++j) {
            if(grid[0][j]=='O') {
                dfs(0, j, grid, m, n);
            }
            if(grid[m-1][j]=='O') {
                dfs(m-1, j, grid, m, n);
            }
        }
        for(int i=0; i<m; ++i) {
            for(int j=0; j<n; ++j) {
                if(grid[i][j]=='O') {
                    grid[i][j] = 'X';
                }else if(grid[i][j]=='$') {
                    grid[i][j] = 'O';
                }
            }
        }
    }