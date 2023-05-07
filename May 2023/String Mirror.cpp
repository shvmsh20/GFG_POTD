string stringMirror(string s){
        // Code here
        string temp="";
        temp+=s[0];
        for(int i=1;i<s.length();i++){
            if((s[i-1]>s[i])||(i>1 && s[i-1]==s[i]))    temp+=s[i];
            else break;
        }
        string ans="";
        ans+=temp;
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }