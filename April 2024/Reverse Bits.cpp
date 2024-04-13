long long reversedBits(long long x) {
        // code here
        long long res = 0;
        
        for(int i=0; i<31; i++){
            if(x & (1<<i)){
                res = res | (1LL<<(31-i));
            }
        }
        
        return res;
    }