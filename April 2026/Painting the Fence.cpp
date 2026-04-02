int mod = 1e9+7;
    int add(int a, int b) {
        return (a%mod + b%mod) %mod;
    }
    int mul(int a, int b) {
        return (a%mod*1LL * b%mod) %mod;
    }
    long long solve(int n, int k,vector<int>& dp) {
        if(n==1) {
            return k;
        }
        if(n==2) {
            return add(k,mul(k,k-1));
        }
        if(dp[n]!=-1) return dp[n];
        dp[n] =  add(mul(solve(n-2,k,dp),k-1),mul(solve(n-1,k,dp),k-1));
        return dp[n];
    }
    long long countWays(int n, int k){
        vector<int>dp(n+1,-1);
        return solve(n,k,dp);
    }