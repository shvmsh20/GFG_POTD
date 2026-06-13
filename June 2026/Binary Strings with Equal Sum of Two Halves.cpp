int mod = 1e9+7;
    long long int power(long long int a, long long int b, int mod){
        long long int ans = 1;
        while(b){
            if(b&1){
                ans = ((ans%mod)*(a%mod))%mod;
            }
            a = ((a%mod)*(a%mod))%mod;
            b = b/2;
        }
        return ans;
    }
   
    int computeValue(int n) {
        // code here
        long long int num = 1, dem = 1;
        for(int i=0; i<n; i++){
            num = ((num%mod)*((2*n-i)%mod))%mod;
            dem = ((dem%mod)*(i+1))%mod;
        }
        return (num*power(dem, mod-2, mod))%mod;
    }