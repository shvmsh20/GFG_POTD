int solve(int n, int x, int y, int z, vector<int>&dp) {
        if(n==0) return 0;
        if(dp[n] != -1) return dp[n];
        int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
        if(n>=x) op1 = solve(n-x,x,y,z,dp);
        if(n>=y) op2 = solve(n-y,x,y,z,dp);
        if(n>=z) op3 = solve(n-z,x,y,z,dp);
        dp[n] = 1 + max(op1,max(op2,op3));
        return dp[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int>dp(n+1,-1);
        int ans = solve(n,x,y,z,dp);
        if(ans < 0) return 0;
        return ans;
    }