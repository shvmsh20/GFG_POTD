int kPalindrome(string str1, int n, int k)
    {
        // code here
         vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        string str2 = str1;
        reverse(str2.begin(),str2.end());
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[n][n]>=n-k;
    }