string printString(string s, char ch, int count) {
        // Your code goes here
        int cnt = 0;
        string res;
        for(int i=0; i<s.size(); i++){
            if(cnt==count){
                res.push_back(s[i]);
            }else if(s[i]==ch){
                cnt++;
            }
        }
        return res;
    }