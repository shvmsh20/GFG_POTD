vector<int> getPrimes(int n) {
        // code here
        vector<bool> isPrime(n+1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i=2; i*i<=n; i++){
            for(int x=i*i; x<=n; x+=i){
                isPrime[x] = false;
            }
        }
        for(int i=2; i<=n/2; i++){
            if(isPrime[i] && isPrime[n-i]){
                return {i, n-i};
            }
        }
        return {-1, -1};
    }