pair<int, int> solve(vector<int> &v){
        int mx = INT_MIN, mn = INT_MAX;
        for(int i=0; i<26; i++){
            if(v[i]!=0){
                mn = min(mn, v[i]);
                mx = max(mx, v[i]);
            }
        }
        return {mx, mn};
    }
    int beautySum(string s) {
        // Your code goes here
        int n = s.length();
        int res=0;
        for(int i=0; i<n; i++){
            vector<int> freq(26);
            for(int j=i; j<n; j++){
                freq[s[j]-'a']++;
                pair<int, int> p = solve(freq);
                res+= p.first-p.second;
            }
        }
        return res;
    }