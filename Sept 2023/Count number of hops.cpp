long long countWays(int N)
    {
        
        // your code here
        long long n=N;
        int mod=1e9+7;
        vector<long long>dp(n+1,0);
        dp[0]=1,dp[1]=1,dp[2]=2;
        for(int i=3;i<=n;i++) dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%mod;
        return dp[n]%mod;
        
    }