int longestUniqueSubstr(string &s) {
        // code here
        int res = 1, n = s.size();
        unordered_map<int, int> mp;
        int left = 0;
        for(int right=0; right<n; right++){
            mp[s[right]]++;
            while(mp.size()<(right-left+1)){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            res = max(res, right-left+1);
        }
        return res;
        
    }