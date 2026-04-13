string removeSpaces(string& s) {
        // code here
        string res;
        for(int x: s){
            if(x!=' '){
                res.push_back(x);
            }
        }
        return res;
    }