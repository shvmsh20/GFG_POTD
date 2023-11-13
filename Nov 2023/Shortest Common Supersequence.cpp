int lcs(string a, string b){
    int m = a.size(), n = b.size();
    int dp[n+1][m+1];
    for(int i=0; i<m+1; i++){
        dp[0][i]=0;
    }
    for(int i=0; i<n+1; i++){
        dp[i][0]=0;
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(a[j-1]==b[i-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        return m+n-lcs(X, Y);
    }