int solve(int i, int W, int val[], int wt[], vector<vector<int>>&dp){
        if(i==0){
            if(W>=wt[0]){
                return (int)(W/wt[0])*val[0];
            }else return 0;
        }
        
        if(dp[i][W]!=-1) return dp[i][W];
        
        int take=-1e9;
        if(W>=wt[i]){
            take=val[i]+solve(i, W-wt[i], val, wt, dp);
        }
        
        int ntake=solve(i-1, W, val, wt, dp);
        return dp[i][W]=max(take, ntake);
    }

    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N+1, vector<int>(W+1, -1));
        return solve(N-1, W, val, wt, dp);
    }