int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        int res = 0;
        for(int i=0; i<arr.size(); i++){
            if(mp.find(arr[i]-k)!=mp.end()){
                res+= mp[arr[i]-k];
            }
            if(mp.find(arr[i]+k)!=mp.end()){
                res+= mp[arr[i]+k];
            }
            mp[arr[i]]++;
        }
        return res;
    }