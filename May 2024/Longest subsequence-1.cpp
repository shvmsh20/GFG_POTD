int longestSubseq(int n, vector<int> &a) {
        // code here
        unordered_map<int,int> dp;
        int ans = 0;
        for(int i=0;i<n;i++){
            dp[a[i]] = max(dp[a[i]-1],dp[a[i]+1]) + 1;
            ans = max(ans,dp[a[i]]);
        }
        return ans;
    }