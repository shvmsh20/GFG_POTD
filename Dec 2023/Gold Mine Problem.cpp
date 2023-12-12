long long  recurssion_Memoization(int i,int j,int n,int m,vector<vector<int>> &M,vector<vector<int>> &dp){
        if(i<0||j<0||i>=n||j>=m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int till=max(max(recurssion_Memoization(i-1,j-1,n,m,M,dp),recurssion_Memoization(i,j-1,n,m,M,dp)),recurssion_Memoization(i+1,j-1,n,m,M,dp));
        return dp[i][j]=till+M[i][j];
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        long long  maxi=0;
        vector<vector<int>> dp(n,vector<int> (m,-1));
        for(int i=0;i<n;i++)
        {
            maxi=max(recurssion_Memoization(i,m-1,n,m,M,dp),maxi);
        }
        return maxi;
    }