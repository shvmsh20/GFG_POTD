string removeDups(string str) {
        // Your code goes here
        unordered_set<char> s;
        string res;
        for(char x: str){
            if(s.find(x)==s.end()){
                res.push_back(x);
                s.insert(x);
            }
        }
        return res;
    }