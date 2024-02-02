int atoi(string s) {
        //Your code here
        int i = 0;
        bool neg = false;
        if(s[0]=='-'){
            neg = true;
            i = 1;
        }
        int res = 0;
        for(; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                res = ((res*10) + (s[i]-'0'));
            }else{
                return -1;
            }
        }
        if(neg){
            return -1*res;
        }
        return res;
    }