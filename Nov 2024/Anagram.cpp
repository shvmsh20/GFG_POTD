bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size()){
            return false;
        }
        vector<int> freq(26);
        for(int i=0; i<s1.size(); i++){
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }