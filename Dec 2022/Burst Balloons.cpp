int solve(int l, int r, vector<int> &arr, vector<vector<int>> &dp){
        if(l>r){
            return 0;
        }
        if(dp[l][r]!=-1){
            return dp[l][r];
        }
        int res = 0;
        for(int i=l; i<=r; i++){
            int temp = arr[l-1]*arr[i]*arr[r+1];
            res = max(res, temp+solve(l, i-1, arr, dp)+solve(i+1, r, arr, dp));
        }
        return dp[l][r] = res;
    }
    int maxCoins(int n, vector<int> &arr) {
        // code here
        arr.insert(arr.begin(), 1);
        arr.push_back(1);
        vector<vector<int>> dp(n+2, vector<int> (n+2, -1));
        return solve(1, n, arr, dp);
    }