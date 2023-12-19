int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int xr = m ^ n;
        if(xr==0){
            return -1;
        }
        int num = xr & (~(xr-1));
        return log2(num)+1;
    }