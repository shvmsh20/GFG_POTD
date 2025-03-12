int solve(int index, int n, vector<int> &cost, vector<int> &dp){
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        // jump 1
        int res = solve(index+1, n, cost, dp);
        // jump2
        res = min(res, solve(index+2, n, cost, dp));
        return dp[index] = res+cost[index];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        vector<int> dp(n, -1);
        int res1 = solve(0, n, cost, dp);
        for(int i=0; i<n; i++){
            dp[i] = -1;
        }
        int res2 = solve(1, n, cost, dp);
        return min(res1,  res2);
    }