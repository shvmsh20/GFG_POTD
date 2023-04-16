int solve(vector<int> &a, int n, int k, vector<vector<int>> &dp) {
        if(n == 0)
            return k == 0;
    
        if(dp[n][k] != -1)
            return dp[n][k];
    
        int take = solve(a, n-1, k^a[n-1],dp);
        int leave = solve(a, n-1, k,dp);
    
        dp[n][k] = take+leave;
    
        return dp[n][k];
    }
    
    int subsetXOR(vector<int> arr, int N, int K) {
        
        vector<vector<int>> dp(N+1, vector<int> (128,-1));
        
        return solve(arr, N, K, dp);
    }