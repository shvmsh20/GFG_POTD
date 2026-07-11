int dx[4] = { 0, 1, 0, -1};
    int dy[4] = { 1, 0, -1, 0};
    int solve(int x, int y, int xd, int yd, int n, int m, vector<vector<int>>& mat){
        if(x==xd && y==yd){
            return 0;
        }
        int org = mat[x][y];
        mat[x][y] = 0;
        int res = -1;
        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]!=0){
                int t = solve(nx, ny, xd, yd, n, m, mat);
                if(t!=-1){
                    res = max(res, t+1);
                }
            }
        }
        mat[x][y] = org;
        return res;
    }
    int longestPath(vector<vector<int>>& mat, int xs, int ys, int xd, int yd) {
        // code here
        int n = mat.size(), m = mat[0].size();
        return solve(xs, ys, xd, yd, n, m, mat);
    }