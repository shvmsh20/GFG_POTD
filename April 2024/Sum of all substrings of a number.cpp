int mod = 1e9+7;
    long long sumSubstrings(string s){
        
        // your code here
        int n = s.size();
        vector<long long> res;
        res.push_back(s[0]-'0');
        for(int i=1; i<n; i++){
            long long x = (res.back()*10)%mod;
            long long y = ((s[i]-'0')*(i+1))%mod;
            long long z = (x+y)%mod;
            res.push_back(z);
        }
        long long ans = 0;
        for(int i=0; i<n; i++){
            ans = (ans + res[i])%mod;
        }
        return ans;
        
    }