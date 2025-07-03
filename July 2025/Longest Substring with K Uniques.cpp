int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char, int> mp;
        int lo = 0, hi = 0, n = s.size(), res = 0;
        while(hi<n){
            while(mp.size()<=k && hi<n){
                mp[s[hi]]++;
                if(mp.size()==k){
                    res = max(res, hi-lo+1);
                }
                hi++;
            }
            while(mp.size()!=k && lo<hi){
                mp[s[lo]]--;
                if(mp[s[lo]]==0){
                    mp.erase(s[lo]);
                }
                lo++;
            }
        }
        return res==0?-1: res;
    }