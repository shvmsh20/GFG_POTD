int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int>dp(n,0);
        for(int i=n-2;i>=0;i--){
            int ans = INT_MAX;
            for(int j=i+1;j<min(n,i+k+1);j++){
                ans = min(dp[j] + abs(arr[i]-arr[j]),ans);
            }
            dp[i] = ans;
        }
        return dp[0];
    }