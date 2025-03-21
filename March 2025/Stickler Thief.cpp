int solve(int index, int n, vector<int> &arr, vector<int> &dp){
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        // take
        int res = arr[index]+solve(index+2, n, arr, dp);
        // not take
        res = max(res, solve(index+1, n, arr, dp));
        return dp[index] = res;
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n, -1);
        return solve(0, n, arr, dp);
    }