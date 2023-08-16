int m=1e9+7;
    int findCatalan(int n) 
    
    {
        //code here
        int  dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n+1;i++){
            
            dp[i]=0;
            for(int j=i-1;j>=0;j--){
                dp[i]+=((long long)dp[j]*(long long)dp[i-j-1])%m;
                dp[i]=dp[i]%m;
                
            }
            
        }
        return dp[n];
        
    }