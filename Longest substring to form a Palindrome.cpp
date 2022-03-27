int longestSubstring(string S) {
        // code here
        unordered_map<int, int> mp;
        mp[0] = -1;
        
        int state = 0, res = 0;
        for(int i=0; i<S.length(); i++) {
            state ^= 1<<(S[i]-'a');
            if(mp.find(state) != mp.end()) res = max(res, i-mp[state]);
            else mp[state] = i;
            
            for(int k=0; k<26; k++) {
                int mask = state^(1<<k);
                if(mp.find(mask) != mp.end())
                    res = max(res, i-mp[mask]);
            }
        }
        
        return res;
    
        
    }