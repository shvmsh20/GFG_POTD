long long int minIncrements(vector<int> arr, int N) {
        int ans=0;
        map<int,int> mp;
        for(auto it:arr) mp[it]++;
        for(auto it:mp){
            int num=it.first;int freq=it.second;
            if(freq==1){
                continue;
            }
            int cnt=freq-1;
            int val=num+1;
            while(cnt--){
                while(mp[val]>0) val++;
                mp[val]++;
                ans+=(val++)-num;
            }
        }
        return ans;
    }