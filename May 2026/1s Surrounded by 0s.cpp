int cntOnes(vector<vector<int>>& grid) {
        // code here
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>> q;
        for(int i=0; i<n; i++){
            if(grid[i][0]){
                q.push({i, 0});
                grid[i][0] = 0;
            }
            if(grid[i][m-1]){
                q.push({i, m-1});
                grid[i][m-1] = 0;
            }
        }
        for(int j=0; j<m; j++){
            if(grid[0][j]){
                q.push({0, j});
                grid[0][j] = 0;
            }
            if(grid[n-1][j]){
                q.push({n-1, j});
                grid[n-1][j] = 0;
            }
        }
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, -1, 0, 1};
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            for(int i=0; i<4; i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]){
                    grid[nx][ny] = 0;
                    q.push({nx, ny});
                }
            }
        }
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]){
                    res++;
                }
            }
        }
        return res;
    }