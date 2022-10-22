int fillingBucket(int n) {
        // code here
        int prev = 0;
        int curr = 0;
        int next = 1;
        
        while(n-->0){
            curr = next;
            next += prev;
            next %= MOD;
            prev = curr;
        }
        
        return next;
    }