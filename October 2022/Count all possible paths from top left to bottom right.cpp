int mod = 1e9+7;
    long long int numberOfPaths(int m, int n){
        // code here
        vector<vector<long long int>> dp(n, vector<long long int>(m, 1));
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                dp[i][j] = ((dp[i-1][j]%mod)+(dp[i][j-1]%mod))%mod;
            }
        }
        return dp[n-1][m-1];
    }