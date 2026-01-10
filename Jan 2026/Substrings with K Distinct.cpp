int solve(string &s, int k){
        vector<int> freq(26, 0);
        int n = s.size(), cnt = 0;
        int j=0, distinct = 0;
        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']==1){
                distinct++;
            }
            while(distinct==k){
                cnt+=(n-i);
                if(freq[s[j]-'a']==1){
                    distinct--;
                }
                freq[s[j]-'a']--;
                j++;
            }
        }
        return cnt;
    }
    int countSubstr(string& s, int k) {
        // code here.
        
        int atLeastk = solve(s, k);
        int atLeastkLess = solve(s, k+1);
        return atLeastk-atLeastkLess;
    }