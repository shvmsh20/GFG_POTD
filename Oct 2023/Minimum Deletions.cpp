int lcs(string &a,string &b,int m,int n,vector<vector<int>> &dp){
        if(!m or !n) return 0;
        if(dp[m][n]!= -1) return dp[m][n]; 
        if(a[m-1] == b[n-1]) return dp[m][n]=1+lcs(a,b,m-1,n-1,dp);
        return dp[m][n]=max(lcs(a,b,m-1,n,dp),lcs(a,b,m,n-1,dp));
    }
    int minimumNumberOfDeletions(string S) { 
        string a = S;
        int n = a.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        reverse(S.begin(),S.end());
        return n-lcs(a,S,n,n,dp);
    } 