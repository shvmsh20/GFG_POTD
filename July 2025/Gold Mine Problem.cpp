int solve(int i,int j,int m,int n,vector<vector<int>>&mat,vector<vector<int>>&dp){
      if(i>=m || j==n||i<0)return 0;
      if(dp[i][j]!=-1)return dp[i][j];
      int sum=0;
      sum=max(sum,mat[i][j]+solve(i,j+1,m,n,mat,dp));
      sum=max(sum,mat[i][j]+solve(i-1,j+1,m,n,mat,dp));
      sum=max(sum,mat[i][j]+solve(i+1,j+1,m,n,mat,dp));
      return dp[i][j]=sum;
  }
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int maxSum=0;
        for(int i=0;i<m;i++){
            maxSum=max(maxSum,solve(i,0,m,n,mat,dp));
        }
        return maxSum;
    }