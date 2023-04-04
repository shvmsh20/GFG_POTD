long long countStrings(string s)
    {
        // code here
        long long ans=0;
        long long freq[26]={0}, n = s.size();
        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
        }
        ans = n*(n-1)/2;
        int chck = 0;
        for(int i=0; i<26; i++){
            ans = ans - (long long)(freq[i]*(freq[i]-1)/2);
            if(freq[i]>1){
                chck=1;
            }
        }
        return ans+chck;
    }