int maxLen(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==0) arr[i] = -1;
        }
        unordered_map<int, int> mp;
        int res = 0, prefix = 0;
        for(int i=0; i<n; i++){
            prefix+= arr[i];
            if(prefix==0){
                res = i+1;
            }
            if(mp.find(prefix)!=mp.end()){
                res = max(res, i-mp[prefix]);
            }else{
                mp[prefix] = i;
            }
        }
        return res;
    }