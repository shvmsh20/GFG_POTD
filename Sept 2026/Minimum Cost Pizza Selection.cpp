 int minimumCost(int x, int s, int m, int l, int cs, int cm, int cl) {
        // code here
        vector<int>dp(x+100,0);
                for(int i=x-1;i>=0;i--) dp[i] = min({cs+dp[i+s],cm+dp[i+m],cl+dp[i+l]});
                return dp[0];
    }