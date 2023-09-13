string findLargest(int N, int S){
        // code here
        string res;
        int digit;
        
        while(N--){
            if(S>=9){
                digit = 9;
                S-=9;
                
            }else{
                digit = S;
                S = 0;
            }
            res+= to_string(digit);
        }
        if(res[0]=='0' && res.size()>1){
            return "-1";
        }
        return S==0?res:"-1";
    }