vector<int> countBSTs(vector<int>& arr) {
        // Code here
        int n = (int)arr.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        v.push_back({arr[i],i});
        sort(v.begin(),v.end());
        
        vector<int>dp(n+1,0);
        dp[0] = 1;
        for(int i=1;i<n;i++)
        {
            int count=0;
            for(int k=0;k<i;k++)
            {
                count += dp[k] * dp[i-k-1];
            }
            dp[i]= count;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[v[i].second]=(dp[i]*dp[n-i-1]);
        }
        return ans;
    }