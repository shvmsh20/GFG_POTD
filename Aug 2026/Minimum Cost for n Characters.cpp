int minCost(int n, int i, int d, int c) {
        // code here
        vector<int> dp(n+1);
        dp[1] = i;
        for(int k=2;k<=n;k++){

            int mn = dp[k-1] + i;
            if(k%2==0){

                mn = min(dp[k/2]+c, mn);
            }else{
               mn = min(mn, min(dp[k/2]+c+i, dp[k/2 +1]+c+d)); 
            }
            dp[k] = mn;
        }
        return dp[n];
    }