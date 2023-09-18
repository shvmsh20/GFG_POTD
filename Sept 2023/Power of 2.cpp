bool isPowerofTwo(long long n){
        
        // Your code here 
        int res = 0;
        while(n){
            if(n&1){
                res++;
            }
            n = n>>1;
            if(res>1){
                return false;
            }
        }
        return res==1;
        
    }