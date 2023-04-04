long long int minOperations(int N) {
        // Code here
        long long int t=N/2,ans=0;
            if(N%2!=0)
                 ans=(4+(t-1)*2)*t;
             else
                 ans=(2+(t-1)*2)*t;
            return ans/2;
    }