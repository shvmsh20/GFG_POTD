char nonrepeatingCharacter(string s)
    {
       //Your code here
       vector<int> freq(26);
       for(int i=0; i<s.size(); i++){
           freq[s[i]-'a']++;
       }
       for(int i=0; i<s.size(); i++){
           if(freq[s[i]-'a']==1){
               return s[i];
           }
       }
       return '$';
       
    }