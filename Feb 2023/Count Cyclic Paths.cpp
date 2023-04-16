int mod = 1e9+7;
    int countPaths(int n){
        // code here 
        int hashh[n+1];
      hashh[1]=0;
      hashh[2]=3;
      long long x=3;
      for(int i=3;i<=n;i++)
      {
          x=(x*3)%mod;
          hashh[i]=(x-hashh[i-1]+mod)%mod;
      }
      return hashh[n];
    }