long long int maxSumLCM(int n) 
    {
        // code here
        long long int ans=0;
        for(long long int i=1;i*i<=n;i++) {
            if(n%i==0) {
                ans+=i;
                if(i!=n/i) ans+=(n/i);
            }
        }
        return ans;
    }