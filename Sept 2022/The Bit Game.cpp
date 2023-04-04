int swapBitGame(long long n){
        // code here 
        int count=0;
        while(n){
            n = n&(n-1);
            count++;
        }
        if(count%2==0){
            return 2;
        }
        return 1;
    }