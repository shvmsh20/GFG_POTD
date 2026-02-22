long subarrayXor(vector<int> &arr, int k) {
        // code here
        long res = 0, prefix = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i=0; i<arr.size(); i++){
            prefix = prefix ^ arr[i];
            if(mp.find(prefix^k)!=mp.end()){
                res+= mp[prefix^k];
            }
            mp[prefix]++;
        }
        return res;
    }