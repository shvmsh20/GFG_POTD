int ways(int x, int y)
    {
        //code here.
        vector<vector<int>>dp(x+1,vector<int>(y+1,-1));
        return solve(x,y,dp);
    }
    int solve(int x,int y,vector<vector<int>>&dp){
        if(x==0 && y==0){
            return 1;
        }
        if(x<0 || y<0){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        dp[x][y]=(solve(x-1,y,dp)+solve(x,y-1,dp))%1000000007;
        return dp[x][y];
    }