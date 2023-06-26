const int mod = 1e9+7;
    int binaryexp(int x, int n) {
        if(n == 0) return 1;
        int temp = binaryexp(x, n/2);
        if(n%2 == 0) return (1LL *temp * temp)%mod;
        else return (((1LL*temp*temp)%mod)*x)%mod;
    }
    
public:
    int nCr(int n, int r){
        if(r > n) return 0;
        if(r == n) return 1;
        long long ans = 1;
        //first calculating the numerator
        for(int i = 1; i<=r; i++) {
            ans = (ans*1LL*(i+(n-r)))%mod;
        }
        //now calculating the final ans by dividing the ans with the terms in denominator 
        for(int i = 1; i<=r; i++) {
            int inv = binaryexp(i, mod-2);
            ans = ((ans%mod) * (inv%mod))%mod;
        }
        return ans;
    }