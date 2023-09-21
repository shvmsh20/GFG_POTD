int solve(int i, int arr[], vector<int>&dp){
        if(i==0) return arr[0];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=arr[i]+solve(i-2, arr, dp);
        int ntake=solve(i-1, arr, dp);
        return dp[i]=max(take, ntake);
    }
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>dp(n, -1);
        return solve(n-1, arr, dp);
    }