int nCr(int n, int r) {
        // code here
        if(r>n) return 0;
        if(r==n) return 1;
        int mn = min(n-r, r), temp = n;
        long res = 1;
        while(mn--){
            res = res * temp;
            temp--;
            res = res / (n-temp);
        }
        
        return res;
    }