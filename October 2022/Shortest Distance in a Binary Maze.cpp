int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> des) {
        // code here
        int res=0;
        if(grid[source.first][source.second]==0){
            return -1;
        }
        if(grid[des.first][des.second]==0){
            return -1;
        }
        if(source==des){
            return 0;
        }
        queue<pair<int, int>> q;
        q.push(source);
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        int n = grid.size();
        int m = grid[0].size();
        grid[source.first][source.second] = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            for(int i=0; i<4; i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                    q.push({nx, ny});
                    grid[nx][ny] = 0;
                    if(nx==des.first && ny==des.second){
                        return res+1;
                    }
                }
            }
            }
            
            res++;
        }
        return -1;
    }