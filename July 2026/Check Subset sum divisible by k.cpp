bool solve(int index, int n, int currSum, vector<int> &arr, int k,  vector<vector<int>> &dp){
        if(index==n){
            return 0;
        }
        if(dp[index][currSum]!=-1){
            return dp[index][currSum];
        }
        if(solve(index+1, n, currSum, arr, k, dp)){
            return dp[index][currSum] = 1;
        }
        if((currSum+arr[index])%k==0){
            return dp[index][currSum] = 1;
        }
        return dp[index][currSum] = solve(index+1, n, (currSum+arr[index])%k, arr, k, dp);
    }
    bool divisibleByK(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(k, -1));
        return solve(0, n, 0, arr, k, dp);
    }