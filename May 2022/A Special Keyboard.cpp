int findTime(string S1, string S2) {
        // code here
        unordered_map<char, int> mp;
        int n = S1.size();
        int m = S2.size();
        for(int i=0; i<n; i++){
            mp[S1[i]] = i;
        }
        int res=mp[S2[0]];
        for(int i=1; i<m; i++){
            int temp = mp[S2[i]] - mp[S2[i-1]];
            res+= abs(temp);
        }
        return res;
    }