int solve(int m, int n, int x, vector<vector<int>> &dp){
        if(n==0){
            if(x==0){
                return 1;
            }else{
                return 0;
            }
        }
        if(dp[n][x]!=-1){
            return dp[n][x];
        }
        int res = 0;
        for(int i=1; i<=m; i++){
            if(x-i>=0){
                res+= solve(m, n-1, x-i, dp);
            }
        }
        return dp[n][x] = res;
    }
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(x+1, -1));
        return solve(m, n, x, dp);
    }