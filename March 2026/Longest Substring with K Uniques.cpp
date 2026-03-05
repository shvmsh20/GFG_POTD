int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char, int> mp;
        int n = s.size(), res = -1, left = 0;
        for(int right = 0; right<n; right++){
            mp[s[right]]++;
            if(mp.size()>k){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            if(mp.size()==k){
                res = max(res, right-left+1);
            }
        }
        return res;
    }