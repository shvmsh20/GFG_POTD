bool checkPangram (string s) {
        // your code here
        vector<int> freq(26);
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                freq[s[i]-'A']++;
            }else if(s[i]>='a' && s[i]<='z'){
                freq[s[i]-'a']++;
            }
        }
        for(int i=0; i<26; i++){
            if(!freq[i]){
                return false;
            }
        }
        return true;
    }