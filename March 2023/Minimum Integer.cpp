int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum=0;
        for(int i=0;i<N;i++) sum+=A[i];
        
        int mini=1e9;
        for(int i=0;i<N;i++)
        {
            if(N*1LL*A[i]>=sum) mini=min(mini,A[i]);
        }
        return mini;
    }