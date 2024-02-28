int DivisibleByEight(string s){
        //code here
        if(s.length()>3){
            s = s.substr(s.length()-3);
        }
        int n = stoi(s);
        if(n%8==0){
            return 1;
        }
        return -1;
        
    }