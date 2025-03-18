int solve(int index, int n, vector<int> &arr, int x, vector<vector<int>> &dp){
        if(x==0){
            return 1;
        }
        if(index==n){
            return 0;
        }
        if(dp[index][x]!=-1){
            return dp[index][x];
        }
        bool notTake = solve(index+1, n, arr, x, dp);
        if(notTake){
            return dp[index][x] = notTake;
        }
        if(x>=arr[index]){
            return dp[index][x] = solve(index+1, n, arr, x-arr[index], dp);
        }
        return dp[index][x] = 0;
    }
    bool equalPartition(vector<int>& arr) {
        // code here
        int totalSum = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            totalSum+= arr[i];
        }
        if(totalSum&1){
            return false;
        }
        vector<vector<int>> dp(n, vector<int>(((totalSum/2)+1), -1));
        return solve(0, n, arr, totalSum/2, dp);
    }