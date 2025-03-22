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
    int maxValue(vector<int>& arr) {
        // your code here
        int n = arr.size();
        vector<int> dp(n, -1);
        int res = solve(0, n-1, arr, dp);
        for(int i=0; i<n; i++){
            dp[i] = -1;
        }
        res = max(res, solve(1, n, arr, dp));
        return res;
    }