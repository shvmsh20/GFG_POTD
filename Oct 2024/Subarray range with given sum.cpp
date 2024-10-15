int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int prefixSum = 0, res = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int x: arr){
            prefixSum+= x;
            if(mp.find(prefixSum-tar)!=mp.end()){
                res+= mp[prefixSum-tar];
            }
            mp[prefixSum]++;
        }
        return res;
    }