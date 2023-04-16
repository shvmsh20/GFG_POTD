int mod = 1e9+7;
    int dp[1001][801];
    int nCr(int n, int r){
        // code here
        if(r>n){
            return 0;
        }
        if(r==0 || r==n){
            return 1;
        }
        if(dp[n][r]!=0){
            return dp[n][r];
        }
        
        return dp[n][r] = ((nCr(n-1, r))%mod+(nCr(n-1, r-1))%mod)%mod;
    }
    int  knots(int M, int N, int K){
        // code here
       long c1 = nCr(M, K)%mod;
       long c2 = nCr(N, K)%mod;
       //cout << c1 << " " << c2 << endl;
       return ((c1%mod) * (c2%mod))%mod;
    }