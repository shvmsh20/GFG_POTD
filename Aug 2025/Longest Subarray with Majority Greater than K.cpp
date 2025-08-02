int longestSubarray(vector<int> &arr, int k) {
        // Code here
         unordered_map<int, int>mp;
        int n = arr.size();
        int prefix = 0, res = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>k){
                prefix++;
            }else{
                prefix--;
            }
            if(mp.find(prefix)==mp.end()){
                mp[prefix] = i;
            }
            if(prefix>0){
                res = i+1;
            }else{
                if(mp.find(prefix-1)!=mp.end()){
                    res = max(res, i-mp[prefix-1]);
                }
            }
            
        }
        return res;
    }