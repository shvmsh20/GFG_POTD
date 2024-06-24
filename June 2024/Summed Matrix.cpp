long long sumMatrix(long long n, long long q) {
        // code here
        if(q<2 || q>2*n){
            return 0;
        }
        if(n+1>=q){
            return q-1;
        }
        return 2*n-q+1;
    }