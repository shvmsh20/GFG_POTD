int countSubstring(string &s) {
        // code here
        int n = s.size();
        unordered_map<char, int> mp; 
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int res = 0;
        for(auto it: mp){
            int m = it.second;
            if(m>1){
                res+= ((m-1)*m)/2;
            }
            res+= m;
        }
        return res;
    }