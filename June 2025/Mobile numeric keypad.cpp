long long solve(int i, int j, int n, vector<vector<char>> &mat, vector<vector<vector<long long>>> &dp){
        if(i<0 || i>3 || j<0 || j>2 || mat[i][j]=='*' || mat[i][j]=='#'){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(dp[i][j][n]!=-1){
            return dp[i][j][n];
        }
        long long res = 0;
        res+= solve(i, j, n-1, mat, dp);
        res+= solve(i-1, j, n-1, mat, dp);
        res+= solve(i, j+1, n-1, mat, dp);
        res+= solve(i+1, j, n-1, mat, dp);
        res+= solve(i, j-1, n-1, mat, dp);
        return dp[i][j][n] = res;
    }
    long long getCount(int n) {
        // Your code goes here
        vector<vector<char>> mat = {{'1', '2', '3'},{'4', '5', '6'}, {'7', '8', '9'}, {'*', '0', '#'}};
        vector<vector<vector<long long>>> dp(4, vector<vector<long long>> (3, vector<long long>(n+1, -1)));
        long long cnt = 0;
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                if(mat[i][j]!='*' && mat[i][j]!='#'){
                    cnt+= solve(i, j, n,  mat, dp);
                }
            }
        }
        return cnt;
    }