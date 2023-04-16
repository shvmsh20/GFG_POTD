vector<int> satisfyEqn(int a[], int n) {
        // code here
         unordered_map<int,pair<int,int>>mp;
        vector<vector<int>>ans;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int curr=a[i]+a[j];
                if(mp.find(curr) !=mp.end() and i!=mp[curr].first and i!=mp[curr].second and j!=mp[curr].first and j!=mp[curr].second)
                    {
                        vector<int>v{mp[curr].first,mp[curr].second,i,j};
                        ans.push_back(v);
                    }                
                
               else if(mp.find(curr)==mp.end())
                    mp[a[i]+a[j]]={i,j};
                
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()!=0)
        return ans[0];
        else
            return {-1,-1,-1,-1};
    }