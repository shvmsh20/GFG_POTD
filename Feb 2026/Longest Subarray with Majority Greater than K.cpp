int longestSubarray(vector<int> &arr, int k) {
        // Code here
        unordered_map<int, int> mp;
        int res = 0, prefixSum = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=k){
                prefixSum--;
            }else{
                prefixSum++;
            }
            if(prefixSum>0){
                res = i+1;
            }
            if(mp.find(prefixSum-1)!=mp.end()){
                res = max(res, i-mp[prefixSum-1]);
            }
            if(mp.find(prefixSum)==mp.end()){
                mp[prefixSum] = i;
            }
        }
        return res;
    }