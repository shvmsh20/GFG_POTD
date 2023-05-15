int helper(long long x){
        int res = 0;
        while((1<<res)<=x){
            res++;
        }
        return res-1;
    }
    long long countBits(long long N) {
        // code here
        if(N<=1){
            return N;
        }
        long long x = helper(N);
        return (pow(2, x-1)*x) + N-pow(2, x)+1 + countBits(N-pow(2, x));
    }