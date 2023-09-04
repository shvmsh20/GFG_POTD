vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        
        queue<pair<int, int>> q;
        for(int i=0; i<n; i++){
            if(mat[i][0]=='O'){
                q.push({i, 0});
                mat[i][0] = 'Y';
            }
            if(mat[i][m-1]=='O'){
                q.push({i, m-1});
                mat[i][m-1] = 'Y';
            }
        }
        for(int j=0; j<m; j++){
            if(mat[0][j]=='O'){
                q.push({0, j});
                mat[0][j] = 'Y';
            }
            if(mat[n-1][j]=='O'){
                q.push({n-1, j});
                mat[n-1][j] = 'Y';
            }
        }
        int dx[4] = {0, -1, 0, 1};
        int dy[4] = {1, 0, -1, 0};
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            for(int i=0; i<4; i++){
                int nx = dx[i]+x;
                int ny = dy[i]+y;
                if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]=='O'){
                    q.push({nx, ny});
                    mat[nx][ny] = 'Y';
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]=='O'){
                    mat[i][j] = 'X';
                }
                if(mat[i][j]=='Y'){
                    mat[i][j] = 'O';
                }
            }
        }
        return mat;
    }