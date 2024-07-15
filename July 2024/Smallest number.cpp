string smallestNumber(int s, int d) {
        // code here
        
        if(d*9<s){
            return "-1";
        }
        s--;
        d--;
        string res;
        for(int i=0; i<d; i++){
            int ans = min(9, s);
            s-= ans;
            res.push_back('0'+ans);
        }
        if(s){
            s++;
            res.push_back('0'+s);
        }else{
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        return res;
    }