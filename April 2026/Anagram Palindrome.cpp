bool canFormPalindrome(string &s) {
        // code here
        vector<int> mp(26, 0);
        for(char c: s)mp[c-'a']++;
        int allowed = true;
        for(int cnt: mp){
            if(cnt%2){
                if(!allowed)return false;
                allowed = false;
            }
        }
        return true;
    }