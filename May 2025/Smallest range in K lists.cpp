 vector<int> findSmallestRange(vector<vector<int>>& arr) {
        // code here
         vector<int>ans;
        vector<pair<int,int>>nums;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                nums.push_back({arr[i][j],i});
            }
        }
        sort(nums.begin(),nums.end());
        vector<int>val,idx;
        for(auto i:nums){
            val.push_back(i.first);
            idx.push_back(i.second);
        }
        map<int,int>mp;
        int l=0;
        int r=0;
        int n=arr.size();
        while(r<idx.size()){
            mp[idx[r]]++;
            if(mp.size()>=n){
                while(mp[idx[l]]>1){
                    mp[idx[l++]]--;
                }
            }
            if(ans.size()==0 and mp.size()>=n){
                ans={val[l],val[r]};
            }
            else if(val[r]-val[l]<ans[1]-ans[0] and mp.size()>=n){
                ans={val[l],val[r]};
            }
            r++;
        }
        return ans;
    }