int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        int res = 0;
        int n = mat.size(), m = mat[0].size();
        int cnt = 0;
        queue<pair<int, int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==2){
                    q.push({i, j});
                }
                if(mat[i][j]==0){
                    cnt++;
                }
            }
        }
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        
        while(!q.empty()){
            int sz = q.size();
            for(int i=0; i<sz; i++){
                pair<int, int> p = q.front();
                cnt++;
                q.pop();
                int x = p.first, y = p.second;
                for(int j=0; j<4; j++){
                    int nx = x+dx[j];
                    int ny = y+dy[j];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]==1){
                        mat[nx][ny] = 2;
                        q.push({nx, ny});
                    }
                }
            }
            if(q.size()){
                res++;
            }
        }
        if(cnt==n*m){
            return res;
        }
        return -1;
    }