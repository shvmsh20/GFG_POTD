vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        unordered_map<int, int> mp;
        int prefix = 0, n = arr.size();
        for(int i=0; i<n; i++){
            prefix+= arr[i];
            if(prefix==target){
                return {1, i+1};
            }
            if(mp.find(prefix-target)!=mp.end()){
                return {mp[prefix-target]+2, i+1};
            }
            if(mp.find(prefix)==mp.end()){
                mp[prefix] = i;
            }
        }
        return {-1};
    }