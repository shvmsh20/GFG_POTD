int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};
    int lip(int x, int y, int n, int m, vector<vector<int>>& matrix, vector<vector<int>>& dp){
        if(dp[x][y]!=0){
            return dp[x][y];
        }
        int mx=1;
        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && matrix[nx][ny]>matrix[x][y]){
                mx = max(mx, 1+lip(nx, ny, n, m, matrix, dp));
            }
        }
        return dp[x][y] = mx;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int res=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               
                res = max(res, lip(i, j, n, m, matrix, dp));
                
            }
        }
        
        return res;
    }