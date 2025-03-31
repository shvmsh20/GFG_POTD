int maxPartitions(string &s) {
        // code here
        unordered_map<char, int> mp;
        int n = s.size(), res = 0, last = 0;
        for(int i=n-1; i>=0; i--){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = i;
            }
        }
        for(int i=0; i<n; i++){
            last = max(last, mp[s[i]]);
            if(last==i){
                res++;
                last = i+1;
                
            }
        }
        return res;
        
    }