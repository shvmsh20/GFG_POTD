int solve(int w, int n, vector<int> &wt, vector<int> &val, vector<vector<int>> &dp){
        if(w==0 || n==0){
            return 0;
        }
        if(dp[w][n]!=-1){
            return dp[w][n];
        }
        // ignore
        int res = solve(w, n-1, wt, val, dp);
        //take
        if(w>=wt[n-1]){
            res = max(res, val[n-1]+solve(w-wt[n-1], n-1, wt, val, dp));
        }
        return dp[w][n] = res;
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n = wt.size();
        vector<vector<int>> dp(W+1, vector<int>(n+1, -1));
        return solve(W, n, wt, val, dp);
    }