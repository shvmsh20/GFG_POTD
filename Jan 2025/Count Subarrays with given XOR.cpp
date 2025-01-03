long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> mp;
        long res = 0;
        int prefixXor = 0;
        for(int i=0; i<arr.size(); i++){
            prefixXor = prefixXor ^ arr[i];
            if(prefixXor==k){
                res++;
            }
            if(mp.find(prefixXor^k)!=mp.end()){
                res+= mp[prefixXor^k];
            }
            mp[prefixXor]++;
        }
        return res;
    }