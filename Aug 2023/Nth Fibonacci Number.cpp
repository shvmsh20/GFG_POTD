int nthFibonacci(int n){
        // code here
          vector<int>dp={1,1};
        if(n==1 || n==2){return dp[0];}
        for(int i=3;i<=n;i++){
            dp.push_back((dp[i-2]+dp[i-3])%1000000007);
        }
        int ans=dp[n-1];
        int MOD=1000000007;
        return ans%MOD;
    }