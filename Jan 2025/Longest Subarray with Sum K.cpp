int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        int prefix = 0, n = arr.size(), res = 0;
        for(int i=0; i<n; i++){
            prefix+= arr[i];
            if(prefix==k){
                res = i+1;
            }else{
                if(mp.find(prefix-k)!=mp.end()){
                    res = max(res, i-mp[prefix-k]);
                }
            }
            if(mp.find(prefix)==mp.end()){
                mp[prefix] = i;
            }
        }
        return res;
    }