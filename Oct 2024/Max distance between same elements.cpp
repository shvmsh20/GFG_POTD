int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int, int> mp;
        int res = 0;
        for(int i=0; i<arr.size(); i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]] = i;
            }else{
                res = max(res, i - mp[arr[i]]);
            }
        }
        return res;
    }