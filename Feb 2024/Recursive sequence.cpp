int mod = 1e9+7;
    long long sequence(int n){
        // code here
        if(n==1){
            return 1;
        }
        long long lst = (n*(n+1))/2;
        long long currRes = 1;
        for(int i=0; i<n; i++){
            currRes = (currRes*lst)%mod;
            lst--;
        }
        return ((sequence(n-1)%mod) + currRes)%mod;
    }