 int solve(int n, vector<int> &dp){
        if(n==0){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int res = INT_MIN;
        for(int i=1; i<=n; i++){
            res = max(res, i*(solve(n-i, dp)));
        }
        return dp[n] = res;
    }
    int maxProduct(int n) {
        // code here
        int res = INT_MIN;
        vector<int> dp(n+1, -1);
        for(int i=1; i<=n-1; i++){
            res = max(res, i*solve(n-i, dp));
        }
        return res;
    }