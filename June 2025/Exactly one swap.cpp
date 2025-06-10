int countStrings(string &s) {
        // code here
        vector<int> freq(26, 0);
        int n = s.size();
        for(char x: s){
            freq[x-'a']++;
        }
        int cnt = 0, ans = 0;
        for(int i=0; i<26; i++){
            if(freq[i]>1){
                cnt+= (freq[i]*(freq[i]-1))/2;
                ans = 1;
            }
        }
        return (n*(n-1)/2) - cnt + ans;
    }