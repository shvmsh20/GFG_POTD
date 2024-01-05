	int TotalWays(int N)
	{
	    // Code here
	    int mod = 1e9+7;
	    vector<long> dp(N+1);
	    dp[0] = 1;
	    dp[1] = 2;
	    for(int i=2; i<=N; i++){
	        dp[i] = ((dp[i-1]%mod)+(dp[i-2]%mod))%mod;
	    }
	    return ((dp[N]%mod)*(dp[N]%mod))%mod;
	}