int smallestSubstring(string s) {
        // code here
        unordered_map<char, int> mp;
        int left = 0, right = 0, n = s.size(), res = INT_MAX;
        while(right<n){
            mp[s[right]]++;
            while(mp.find('0')!=mp.end() && mp.find('1')!=mp.end() 
            && mp.find('2')!=mp.end()){
                while(left<right){
                    res = min(res, right-left+1);
                    mp[s[left]]--;
                    if(mp[s[left]]==0){
                        mp.erase(s[left]);
                        left++;
                        break;
                    }
                    left++;
                }
            }
            right++;
        }
        
        return res==INT_MAX?-1:res;
    }