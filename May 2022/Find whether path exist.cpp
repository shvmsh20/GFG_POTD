bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool> (n, false));
        queue<pair<int, int>> q;
        int dx=-1, dy=-1, sx=-1, sy=-1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    sx=i;
                    sy=j;
                }else if(grid[i][j]==2){
                    dx=i;
                    dy=j;
                }
            }
        }
        q.push({sx, sy});
        int disX[4]={1,0,-1, 0};
        int disY[4]={0, 1, 0, -1};
        visited[sx][sy]=true;
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            if(x==dx && y==dy){
                return true;
            }
            for(int i=0; i<4; i++){
                int nx = x+disX[i];
                int ny = y+disY[i];
                if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]!=0 && visited[nx][ny]==false){
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        return false;
    }