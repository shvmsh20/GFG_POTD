int setSetBit(int x, int y, int l, int r){
        // code here
        long long int val = 0;
        for(int i=l-1;i<=r-1;i++) val+=pow(2,i);
        y = y & val;
        return x | y;
    }