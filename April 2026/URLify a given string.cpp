string URLify(string &s) {
        // code here
        string res;
        for(char x: s){
            if(x==' '){
                res+= "%20";
            }else{
                res.push_back(x);
            }
        }
        return res;
    }