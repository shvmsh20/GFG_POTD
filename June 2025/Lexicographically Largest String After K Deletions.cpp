string maxSubseq(string& s, int k) {
        // code here
      
        string res;
        for(int i=0; i<s.size(); i++){
            if(res.empty() || res.back()>=s[i]){
                res.push_back(s[i]);
            }else{
                while(k && !res.empty() && res.back()<s[i]){
                    res.pop_back();
                    k--;
                }
                res.push_back(s[i]);
            }
        }
        while(k--){
            res.pop_back();
        }
        return res;
        
        
    }