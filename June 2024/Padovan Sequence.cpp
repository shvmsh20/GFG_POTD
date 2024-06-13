int padovanSequence(int n)
    {
       //code here
       if(n<=2){
           return 1;
       }
       int mod = 1e9+7;
       int x0 = 1, x1 = 1, x2 = 1;
       for(int i=3; i<=n; i++){
           int nextNum = (x1+x0)%mod;
           x0 = x1;
           x1 = x2;
           x2 = nextNum;
       }
       return x2;
    }