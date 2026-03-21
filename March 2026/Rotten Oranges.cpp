int orangesRot(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        queue<pair<int, int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==2){
                    q.push({i, j});
                }
            }
        }
        int res = 0;
        int dx[4] = { 0, 1, 0, -1};
        int dy[4] = { 1, 0, -1, 0};
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                pair<int, int> p = q.front();
                q.pop();
                int x = p.first, y = p.second;
                for(int i=0; i<4; i++){
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]==1){
                        q.push({nx, ny});
                        mat[nx][ny] = 2;
                    }
                }
            }
            if(q.size()) res++;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==1){
                    return -1;
                }
            }
        }
        return res;
        
    }