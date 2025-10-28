vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<int>> res(n, vector<int>(m));
	    queue<vector<int>> q;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(grid[i][j]==1){
	                q.push({i, j, 0});
	                grid[i][j] -1;
	            }
	        }
	    }
	    int dx[4] = {1, 0, -1, 0};
	    int dy[4] = {0, 1, 0, -1};
	    while(!q.empty()){
	        int sz = q.size();
	        for(int i=0; i<sz; i++){
	            vector<int> v = q.front();
	            q.pop();
	            int dist = v[2];
	            int x = v[0], y = v[1];
	            for(int k=0; k<4; k++){
	                int nx = x+dx[k];
	                int ny = y+dy[k];
	                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==0){
	                    res[nx][ny] = dist+1;
	                    grid[nx][ny] = -1;
	                    q.push({nx, ny, dist+1});
	                }
	            }
	        }
	    }
	    return res;
    }