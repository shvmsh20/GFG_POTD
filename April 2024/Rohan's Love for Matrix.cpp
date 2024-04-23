int firstElement(int n) {
        // code here
          int mod = 1000000007; 
        int a = 1,b = 1,c = 1 ; 
        for(int i=3;i<=n;i++){
            c = (a+b)%mod; 
            a = b ;
            b = c ; 
        }
        return c; 
    }