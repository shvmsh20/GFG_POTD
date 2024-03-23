long long MOD = 1e9+7;
     int  solve(int n,vector<int>&dp){
      if(n<=0){
         return 0;
      }
      if(n==1){
          return 1;
      }
      if(dp[n]!=-1){
          return dp[n]%MOD;
      }
      dp[n]=(solve(n-1,dp)+solve(n-2,dp))%MOD;
      return dp[n]%MOD;
  }
    vector<int> Series(int n) {
        // Code here
  
        vector<int>dp(n+1,-1);
        solve(n,dp);
        dp[0]=0;
        dp[1]=1;
        return dp;
        
    }