int solve(int index, int n, int total, vector<int> &cost, vector<vector<int>> &dp){
        if(index==n){
            return 0;
        }
        if(dp[index][total]!=-1){
            return dp[index][total];
        }
        int res = 0;
        if(total>=cost[index]){
            int refund = ((9*cost[index])/10);
            int newAmount = total-cost[index]+refund;
            res = 1+solve(index+1, n, newAmount, cost, dp);
        }
        res = max(res, solve(index+1, n, total, cost, dp));
        return dp[index][total] = res;
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        vector<vector<int>> dp(n, vector<int> (total+1, -1));
        return solve(0, n, total, cost, dp);
    }