int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n = a1.size();
        int prefix1 = 0, prefix2 = 0, res = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for(int i=0; i<n; i++){
            prefix1+= a1[i];
            prefix2+= a2[i];
            int diff = prefix1-prefix2;
            if(mp.find(diff)!=mp.end()){
                res = max(res, i-mp[diff]);
            }else{
                mp[diff] = i;
            }
        }
        return res;
    }