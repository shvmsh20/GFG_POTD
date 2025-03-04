int lis(vector<int>& arr) {
        // code here
        int n = arr.size();
        int res = 1;
        vector<int> dp(n, 1);
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(arr[i]>arr[j]){
                    dp[i] = max(dp[i], 1+dp[j]);
                    res = max(res, dp[i]);
                }
            }
        }
        return res;
    }