int solve(int index, int n, int arr[], int sum, vector<vector<int>> &dp){
        if(sum==0){
            return 1;
        }
        if(index==n || sum<0){
            return 0;
        }
        if(dp[index][sum]!=-1){
            return dp[index][sum];
        }
        return dp[index][sum] = solve(index+1, n, arr, sum, dp) || solve(index+1, n, arr, sum-arr[index], dp);
    }
    int equalPartition(int n, int arr[])
    {
        // code here
        int totalSum = 0;
        for(int i=0; i<n; i++){
            totalSum+= arr[i];
        }
        if(totalSum%2){
            return 0;
        }
        int sum = totalSum/2;
        vector<vector<int>> dp(n, vector<int> (sum+1, -1));
        return solve(0, n, arr, sum, dp);
    }