vector<int> asciirange(string& s) {
        // code here
        int n = s.size();
        unordered_map<char, int> right, left;
        for(int i=0; i<n; i++){
            right[s[i]] = i;
            left[s[n-i-1]] = n-i-1;
        }
        for(char c = 'a'; c<='z'; c++){
            if(left[c]==right[c]){
                left.erase(c);
                right.erase(c);
            }
        }
        vector<int>res(26, 0);
        for(int i=0; i<n; i++){
            char c = s[i];
            for(char ch = 'a'; ch<='z'; ch++){
                if(i>left[ch] && i<right[ch]){
                    res[ch-'a']+= (c-'a')+97;
                }
            }
        }
        vector<int> ans;
        for(int i=0; i<26; i++){
            if(res[i]){
                ans.push_back(res[i]);
            }
        }
        return ans;
    }