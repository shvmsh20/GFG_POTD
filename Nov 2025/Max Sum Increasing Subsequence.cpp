int solve(int n, int last, vector<int> &arr, vector<vector<int>> &dp){
        if(n==0){
            if(last==-1 || arr[n]<arr[last]) return arr[n];
            return 0;
        }
        if(dp[n][last+1]!=-1) return dp[n][last+1];
        
        int pick=0;
        if(last==-1 || arr[n]<arr[last]) pick=arr[n] + solve(n-1, n, arr, dp);
        int notpick=solve(n-1, last, arr, dp);
        return dp[n][last+1]=max(pick, notpick);
    }
    
  
    int maxSumIS(vector<int>& arr) {
        // code here
        // DP Memoization
        int n=arr.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return solve(n-1, -1, arr, dp);
    }