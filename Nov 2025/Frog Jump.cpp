int solve(int index, int n, vector<int> &height, vector<int> &dp){
        if(index==n-1) return 0;
        if(dp[index]!=-1) return dp[index];
        int res = abs(height[index]-height[index+1])+solve(index+1, n, height, dp);
        if(index+2<n){
            res = min(res, 
            abs(height[index]-height[index+2])+solve(index+2, n, height, dp));
        }
        return dp[index] = res;
    }   
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        if(n==1) return 0;
        vector<int> dp(n, -1);
        return solve(0, n, height, dp);
    }