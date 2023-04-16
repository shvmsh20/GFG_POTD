nt equalSum(int N, vector<int> &A) {
        // code here
        long long s=0,t=0;
        if(N==1)
      return 1;        
       
        for(int i=0;i<N;i++)
        s=s+A[i];
     
        for(int i=0;i<N;i++){
            if(t==s-t-A[i])return i+1;
            t+=A[i];
        }
        
        
        return -1;
    }