int solve(int i,int j,vector<int>a,int dp[505][505])
   {
       if(i==j) return a[i];
       if(i>j) return 0;
       if(dp[i][j]!=-1) return dp[i][j];
       return dp[i][j]=max(a[i]+min(solve(i+2,j,a,dp),solve(i+1,j-1,a,dp)),a[j]+min(solve(i+1,j-1,a,dp),solve(i,j-2,a,dp)));
   }
   int maxCoins(vector<int>&A,int n)
   {
    //Write your code here
    int dp[505][505];
    memset(dp,-1,sizeof(dp));
    return solve(0,n-1,A,dp); 
   }