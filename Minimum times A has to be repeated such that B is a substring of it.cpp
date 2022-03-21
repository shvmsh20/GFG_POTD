bool isSafe(string a, string b) {
        int freq[26] = {0};
        for(int i = 0; i < a.length(); i++) {
            freq[a[i]-'a']++;
        }
        
        for(int i = 0; i < b.length(); i++) {
            if(freq[b[i] - 'a'] == 0)
                return false;
        }
        return true;
    }
    int minRepeats(string a, string b) {
        // code here
        string s = a;
        int ans = 1;
        if(isSafe(a,b)){
            while(s.find(b) == string::npos){
                s += a;
                ans++;
                if(s.length() > 2*b.length()) return -1;
            }
        }
        else
            return -1;
    
        return ans;
    }