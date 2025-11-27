int solve(vector<int> &arr, int Xor, int i,vector<vector<int>> &dp)
    {
        if(i == arr.size())
        {
            return Xor;
        }
        if(dp[i][Xor] != -1)
            return dp[i][Xor];
        int take    = solve(arr,Xor^arr[i],i+1, dp);
        int notTake = solve(arr,Xor,i+1, dp);
        return dp[i][Xor] = take + notTake;
    }
    
    int subsetXORSum(vector<int>& arr) 
    {
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(2e3+1, -1));
        return solve(arr,0,0,dp);
        // code here
        
    }