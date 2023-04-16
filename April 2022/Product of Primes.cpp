bool isprime(long long n){
        for(long long i=2;i*i<=n;i++)
            if(n%i == 0)
                return false;
        return true;
    }
    long long primeProduct(long long L, long long R){
        long long product=1;
        for(long long i=L;i<=R;i++)
            if(isprime(i))
                product = (product*i) % 1000000007;
        return product;
        
    }