   long long int mod = 1e9 + 7;
   long long int dp[1001][1001];
   
   long long int helper(int n,int k,int k1){
       if(n == 0) return (1);
       
       if(dp[n][k1] != -1) return (dp[n][k1]);
       
       long long int res1 = 0,res2 = 0;
       if(k1 > 0){
           res1 = (5*helper(n-1,k,k1-1)) % mod;
           res2 = (21*helper(n-1,k,k)) % mod;
       }
       else{
           res2 = (21*helper(n-1,k,k)) % mod;
       }
       
       return dp[n][k1] = (res1 + res2) % mod;
   }
    int kvowelwords(int N, int K) {
        // Write Your Code here
       dp[N+1][K+1];
       memset(dp,-1,sizeof(dp));
       return (int)helper(N,K,K);
    }