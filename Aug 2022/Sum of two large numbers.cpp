string findSum(string x, string y) {
        // Your code goes here
        string res;
        int carry = 0;
        int n = x.length(), m = y.length();
        while(n!=0 || m!=0 || carry!=0){
            int a = 0;
            int b = 0;
            if(n>0){
                a = x[n-1]-'0';
                n--;
            }
            if(m>0){
                b = y[m-1]-'0';
                m--;
            }
            int sum = a+b+carry;
            int ans = sum%10;
           
            res+= to_string(ans);
            carry = sum/10;
            
        }
        reverse(res.begin(), res.end());
        for(int i=0; i<res.size(); i++){
            if(res[i]!='0'){
                return res.substr(i);
            }
        }
        return "0";
        
    }