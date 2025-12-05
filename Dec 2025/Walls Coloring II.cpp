int minCost(vector<vector<int>> &costs) {
        // code here
        int n=costs.size(),m=costs[0].size();
        if(m==1){
            if(n==1)
                return costs[0][0];
            return -1;
        }
        vector<int>dp(m);
        for(int j=0;j<m;j++)
            dp[j]=costs[0][j];
        for(int i=1;i<n;i++){
            priority_queue<int> pq;
            for(auto x:dp){
                pq.push(x);
                if(pq.size()>2)
                    pq.pop();
            }
            int min2=pq.top();pq.pop();
            int min1=pq.top();
            // cout<<min1<<" "<<min2<<endl;
            vector<int> dp2(m);
            for(int j=0;j<m;j++){
                int ans=costs[i][j];
                if(dp[j]==min1)
                    ans+=min2;
                else
                    ans+=min1;
                dp2[j]=ans;
            }
            dp=dp2;
        }
        return *min_element(dp.begin(),dp.end());
    }