int solve(int index, int n, vector<int> &cost, int w,  vector<vector<int>> &dp){
        if(w==0){
            return 0;
        }
        if(index==n || index+1>w){
            return INT_MAX;
        }
        if(dp[index][w]!=-1){
            return dp[index][w];
        }
        int notTake = solve(index+1, n, cost, w, dp);
        if(cost[index]==-1){
            return dp[index][w] = notTake;
        }
        int take = solve(0, n, cost, w-(index+1), dp);
        if(take==INT_MAX){
            return dp[index][w] = notTake;
        }else{
            return dp[index][w] = min(notTake, cost[index]+take);
        }
        
    }
    int minimumCost(vector<int> &cost, int w) {
        // code here
        int n = cost.size();
        vector<vector<int>> dp(n, vector<int>(1e4, -1));
        int res = solve(0, n, cost, w, dp);
        return res==INT_MAX?-1:res;
        
    }