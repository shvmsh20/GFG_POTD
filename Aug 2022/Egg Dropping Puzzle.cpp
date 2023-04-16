int solve(int n, int f, vector<vector<int>> &dp){
        if(n==1){
            return f;
        }
        if(f<=1){
            return f;
        }
        if(dp[n][f]!=-1){
            return dp[n][f];
        }
        int mn = INT_MAX;
        for(int k=1; k<=f; k++){
            int t = 1+max(solve(n-1, k-1, dp), solve(n, f-k, dp));
            mn = min(mn, t);
        }
        return dp[n][f] = mn;
    }
    int eggDrop(int n, int f) 
    {
        // your code here
        vector<vector<int>> dp(n+1, vector<int> (f+1));
        for(int j=0; j<=f; j++){
            dp[1][j] = j;
        }
        for(int i=0; i<=n; i++){
            dp[i][1] = 1;
        }
        for(int i=2; i<=n; i++){
            for(int j=2; j<=f; j++){
                int mn = INT_MAX;
                for(int k=1; k<=j; k++){
                    int t = 1+max(dp[i-1][k-1], dp[i][j-k]);
                    mn = min(mn, t);
                }
                dp[i][j] = mn;
            }
        }
        return dp[n][f];
    }