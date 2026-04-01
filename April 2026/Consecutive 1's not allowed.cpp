int solve(int index, int n, int prev, vector<vector<int>> &dp){
        if(index==n){
            return 1;
        }
        if(dp[index][prev]!=-1){
            return dp[index][prev];
        }
        int res = solve(index+1, n, 0, dp);
        if(prev==0 || prev==2){
            res+= solve(index+1, n, 1, dp);
        }
        return dp[index][prev] = res;
    }
    int countStrings(int n) {
        // code here
        vector<vector<int>> dp(n, vector<int> (3, -1));
        return solve(0, n, 2, dp);
    }