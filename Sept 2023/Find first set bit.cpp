unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int x = n & (~(n-1));
       
        int res = 0;
        while(x){
            res++;
            x/=2;
        }
        return res;
    }